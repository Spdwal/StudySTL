#include<iostream>
#include<locale>
#include<string>
#include<cstdlib>
#include<exception>
using namespace std;

int main()
{
	try{
		locale langLocale("");
		cout.imbue(langLocale);

		cout << langLocale.name() << endl;

		bool isGerman = (langLocale.name().substr(0,2) == "de" || langLocale.name().substr(0, 3) == "ger" || langLocale.name().substr(0, 3) == "Ger");

		cout << (isGerman? "Sprachumgebung fuer Eingaben: "
				 : "Locale for input: ") << endl;

		string s;
		cin >> s;
		if(!cin)
		{
			if(isGerman){
				cerr << "FEHLER beim Einlesen der Sprachumgebung"
					 << endl;
			}else{
				cerr << "ERROR while reading the locale" << endl;
			}
			return EXIT_FAILURE;
		}
		locale cinLocale(s);
		cin.imbue(cinLocale);

		cout << (isGerman ? "Gleitkommawerte: "
				 : "floating-point valuers:  ") << endl;
		double  value;
		while(cin >> value){
			cout << value << endl;
		}
	}
	catch(const std::exception& e)
	{
		cerr << "Exception: " << e.what() << endl;
		return EXIT_FAILURE;
	}
}
