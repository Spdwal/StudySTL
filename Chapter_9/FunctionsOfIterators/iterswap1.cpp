#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
template<typename T>
void Print(const T &container)
{
	for(auto elem : container)
	{
		cout << elem << endl;
	}
}

int main()
{
	list<int> coll;
	for(int i = 1; i <= 9; ++i)
	{
		coll.push_back(i);
	}
	Print(coll);

	iter_swap(coll.begin(), next(coll.begin()));
	Print(coll);
	iter_swap(coll.begin(),prev(coll.end()));

	Print(coll);
}
