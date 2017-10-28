#include<forward_list>
#include<iostream>
using namespace std;

int main()
{
	forward_list<long> coll = {2,3,4,5,6,7};
	coll.resize(9);
	for(auto elem: coll)
	{
		cout <<elem << ' ';
	}
	cout << endl;

	coll.resize(10,100);
	for(auto elem: coll)
	{
		cout << elem << ' ';
	}

	cout << endl;

	return 0;

}
