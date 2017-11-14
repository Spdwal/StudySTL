#include<streambuf>
#include<locale>
#include<cstdio>

template<typename charT,
		 typename traits = std::char_traits<charT>>
class basic_outbuf : public std::basic_streambuf<charT, traits>
{
protected:
	virtual typename traits::int_type
	overflow(typename traits::int_type c){
		if(!traits::eq_int_type(c, traits::eof())){
			c = std::toupper(c, this->getloc());

			char cc = std::use_facet<std::ctype<charT>>
				(this ->getloc()).narrow(c, '?');

			if(std::putchar(cc) == EOF)
			{
				return traits::eof();
			}
		}
		return traits::not_eof(c);
	}
};

typedef basic_outbuf<char> outbuf;
typedef basic_outbuf<wchar_t> woutbuf;
