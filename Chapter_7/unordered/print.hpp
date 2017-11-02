#include<iostream>
using namespace std;

template<typename T>
void Print(const T& container)
{
	for(auto elem : container)
	{
		cout << elem << endl;
	}
	cout << endl;
}
