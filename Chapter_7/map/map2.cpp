#include<map>
#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	typedef map<string,float> StringFloatMap;

	StringFloatMap stocks;

	stocks["BASF"] = 369.50;
	stocks["VW"] = 413.50;
	stocks["Daimler"] = 819.00;
	stocks["BMW"] = 834.00;
	stocks["Sinmens"] = 842.20;

	StringFloatMap::iterator pos;

	cout << left;

	for(pos = stocks.begin(); pos != stocks.end(); ++pos)
	{
		cout << "stocks:  " << setw(12) << pos->first
			 << "price: " << pos->second << endl;
	}
	cout << endl;

	for(pos = stocks.begin(); pos != stocks.end(); ++pos)
	{
		pos->second *= 2;
	}

	for(pos = stocks.begin(); pos != stocks.end(); ++pos)
	{
		cout << "stock: " << setw(12) << pos->first
			 << "price: " << pos->second << endl;
	}
	cout << endl;

	stocks["Volkswagen"] = stocks["VW"];
	stocks.erase("VW");;

	for(pos = stocks.begin(); pos != stocks.end(); ++pos)
	{
		cout << "stock: " << setw(12) << pos->first
			 << "price: " << pos->second << endl;
	}

	return 0;
}
