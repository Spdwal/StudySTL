#include<locale>
#include<iostream>
#include<iomanip>
#include<exception>
#include<cstdio>
using namespace std;

int main()
{
	try{
#ifdef _MSC_VER
		locale locG("deu_deu.1252");
#else
		locale locG("de_DE");
#endif

		cin.imbue(locG);
		cout.imbue(locG);
		cout << showbase;

		long double val;
		cout << "monetary value: ";
		cin >> get_money(val, true);

		if(cin){
			cout << put_money(val, false) << endl;
		}else{
			cerr << "invalid format" << endl;
		}
	}catch(const std::exception& e){
		cerr << "Exception: " << e.what() << endl;
		return EXIT_FAILURE;
	}
}
