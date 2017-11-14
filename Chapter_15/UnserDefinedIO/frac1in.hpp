#include<iostream>
inline
std::istream& operator>>(std::istream& strm, Fraction& f)
{
    int n, d;
    strm >> n;

    strm.ignore();
    strm >> d;
    f = Fraction(n,d);
    return strm;
}
