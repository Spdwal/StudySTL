#include<unordered_map>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	unordered_map<string,float> coll;
	coll["VAT1"]=0.16;
	coll["VAT2"]= 0.001;
	coll["Pi"] = 3.14;

	coll["VAT1"] *=2;
	cout << "Vat difference: " << coll["VAT1"] - coll["VAT2"] << endl;
 }
