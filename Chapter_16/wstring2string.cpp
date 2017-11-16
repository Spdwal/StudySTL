#include<string>
#include<iostream>
#include"wstring2string.hpp"

using namespace std;

int main()
{
	std::string s = "Hello, world\n";
	std::wstring ws = to_wstring(s);
	std::wcout << ws;
	std::cout << to_string(ws);
	return 0;
}
