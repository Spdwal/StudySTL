#include<cstdio>
#include<streambuf>
#include<unistd.h>

class outbuf : public std::streambuf{
protected:
    static const int bufferSize = 10;
    char buffer[bufferSize];
public:
    outbuf(){
        setp (buffer, buffer + (bufferSize - 1));
    }

    virtual ~outbuf(){
        sync();
    }
protected:
    int flushBuffer(){
        int num = pptr() - pbase();
        if(write(1, buffer, num) != num)
        {
            return EOF;
        }
        pbump(-num);
        return num;
    }

    virtual int_type overflow(int_type c){
        if(c != EOF)
        {
            *pptr() = c;
            pbump(1);
        }
        if(flushBuffer() == EOF)
        {
            return EOF;
        }

        return c;
    }

    virtual int sync(){
        if(flushBuffer() == EOF){
            return -1;
        }
        return 0;
    }
};
