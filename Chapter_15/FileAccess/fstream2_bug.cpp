#include<iostream>
#include<fstream>
#include<string>

int main()
{
	std::string s("hello");
	std::ofstream("fstream.tmp") << s << std::endl;
	/* ub in c++0X */
	std::ofstream("fstream2.tmp", std::ios::app) << "world" << std::endl;
}
