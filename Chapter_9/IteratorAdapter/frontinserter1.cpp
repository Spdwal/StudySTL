#include<list>
#include<iostream>
#include<algorithm>
#include<iterator>
using namespace std;

template<typename T>
void print(const T& container)
{
	for(auto elem : container)
	{
		cout << elem << endl;
	}
	cout << endl;
}

int main()
{
	list<int>coll;
	front_insert_iterator<list<int>> iter(coll);

	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;

	print(coll);

	front_inserter(coll) = 44;
	front_inserter(coll) = 55;

	print(coll);

	copy(coll.begin(), coll.end(), front_inserter(coll));

	print(coll);

	return 0;
}

