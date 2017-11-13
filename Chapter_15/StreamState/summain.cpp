#include<iostream>
#include<exception>
#include<cstdlib>
#include"sum1.hpp"

int main()
{
	using namespace std;
	double sum;

	try{
		sum = MyLib::readAndProcessSum(cin);
	}catch(const ios::failure & error){
		cerr << "I/O exception: " << error.what() << endl;
		return EXIT_FAILURE;
	}catch(const exception& error)
	{
		cerr << "standard exception: " << error.what() << endl;
		return EXIT_FAILURE;
	}catch(...){
		cerr << "unknown exceptrion" << endl;
		return EXIT_FAILURE;
	}

	cout << "sum:   " << sum << endl;

	return 0;
}
