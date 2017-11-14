#include <streambuf>
#include <locale>
#include <cstdio>
#include<unistd.h>

class outbuf : public std::streambuf
{
  protected:
    // central output function
    // - print characters in uppercase mode
    virtual int_type overflow (int_type c) {
        if (c != EOF) {
            // convert lowercase to uppercase
            char z = std::toupper(c,getloc());

            // and write the character to the standard output
            if (write(1, &z, 1)!= 1) {
                return EOF;
            }
        }
        return c;
    }
};
