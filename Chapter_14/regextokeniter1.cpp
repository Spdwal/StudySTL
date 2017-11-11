#include<string>
#include<regex>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	string data = "<person>\n"
		" <first>Nico</first>\n"
		" <last>Josuttis</last>\n"
		"</person>\n";
	regex reg("<(.*)>(.*)</(\\1)>");

	sregex_token_iterator pos(data.cbegin(), data.cend(),
							  reg,
							  {0,2});

	sregex_token_iterator end;

	for(; pos!=end; ++pos)
		cout << "match:   " << pos->str() << endl;
	cout << endl;

	string names = "nice, jim, helmut, paul, tim, john paul, rita";
	regex seq("[ \t\n]*[,;.][ \t\n]*");
	sregex_token_iterator p(names.cbegin(), names.cend(),
							seq,
							-1);
	sregex_token_iterator e;

	for(; p!= e; p++)
	{
		cout << "name:   " << *p << endl;
	}

	return 0;
}
