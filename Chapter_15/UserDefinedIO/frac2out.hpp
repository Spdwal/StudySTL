#include<iostream>
#include<sstream>

template<typename charT, typename traits>
inline
std::basic_ostream<charT, tratis>&
operator << (std::basic_ostream<charT, traits>& strm,
	const Fraction& f)
{
	std::basic_ostringstream<charT, traits> s;
	s.copyfmt(strm);
	s.width(0);

	s << f.numerator() << '/' << f.denominator();

	strm << s.str();

	return strm;
}
