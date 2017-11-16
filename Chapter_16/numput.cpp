#include<locale>
#include<chrono>
#include<ctime>
#include<iostream>
#include<exception>
#include<cstdlib>
using namespace std;

int main()
{
    try{
        locale locC;
        cout.imbue(locC);
        use_facet<num_put<char>>(locC).put(cout, cout, ' ', 1234.5678);
        cout << endl;

        #ifdef _MSV_VER
        locale locG("deu_deu.1252");
        #else
        locale locG("de_DE");
        #endif
        cout.imbue(locG);
        use_facet<num_put<char>>(locG).put(cout, cout, ' ', 1234.5678);
        cout << endl;
    }catch(const std::exception& e){
        cerr << "Exception: " << e.what() << endl;
        return EXIT_FAILURE;
    }

    return 0;
}
