#include<locale>
#include<iostream>
#include<exception>
#include<cstdlib>
using namespace std;

int main()
{
	try{
#ifdef _MSC_VER
		locale locG("deu_deu.1252");
#else
		locale locG("de_DE");
#endif
		const money_put<char>& mpG = use_facet<money_put<char>>(locG);

		cout.imbue(locG);
		cout << showbase;

		mpG.put(cout, false, cout, ' ', 12345.678);
		cout << endl;
		mpG.put(cout, true, cout, ' ', "123456.78");
		cout << endl;
	}catch(const std::exception& e){
		cerr << "EXCEPTION:  " << e.what() << endl;
		return EXIT_FAILURE;
	}
}
