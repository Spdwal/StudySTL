#include<iostream>

template<typename charT, typename traits>
inline
std::basic_istream<charT, tratis>&
operator>>(std::basic_istream<charT, traits>& strm, Fraction& f)
{
	int n, d;
	strm >> n;
	if(strm.peek() == '/')
	{
		strm.ignore();
		strm >> d;
	}else{
		d = 1;
	}

	if(d == 0)
	{
		strm.setstate(std::ios::failbit);
		return strm;
	}

	if(strm){
		f = Fraction(n, d);
	}

	return strm;
}
