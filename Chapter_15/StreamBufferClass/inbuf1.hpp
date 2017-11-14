#include<cstdio>
#include<cstring>
#include<streambuf>
#include<unistd.h>

class inbuf : public std::streambuf{
protected:
	static const int bufferSize = 10;
	char buffer[bufferSize];

public:
	inbuf(){
		setg(buffer + 4,
			 buffer + 4,
			 buffer + 4);
	}

protected:
	virtual int_type underflow(){
		if(gptr() < egptr()){
			return traits_type::to_int_type((*gptr()));
		}

		int numPutback;
		numPutback = gptr() - eback();
		if(numPutback > 4){
			numPutback = 4;
		}

		std::memmove(buffer+(4- numPutback), gptr() - numPutback,
					numPutback);

		int num;
		num  = read(0, buffer+4, bufferSize - 4);
		if(num <= 0)
		{
			return EOF;
		}

		setg(buffer+(4-numPutback),
			 buffer+4,
			 buffer+4-num);
		return traits_type::to_int_type(*gptr());
	}
};
