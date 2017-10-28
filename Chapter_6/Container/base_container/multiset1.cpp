#include<set>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	multiset<string>cities{"Braunschweig", "Hanover", "Frankfurt", "New York","Chicago", "Toronto","Paris", "Frankfur"};

	for(const auto & elem: cities)
	{
		cout << elem << "  ";
	}
	cout << endl;

	cities.insert({"London","Munich","Hanover"});

	for(const auto & elem: cities)
	{
		cout << elem << "   ";
	}

	return 0;
}
