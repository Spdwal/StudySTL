#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
#include"assoiter.hpp"
#include<iostream>
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
	unordered_set<int> coll;
	asso_insert_iterator<decltype(coll)>iter(coll);

	*iter = 1;
	iter++;
	*iter = 2;
	iter ++;
	*iter = 3;

	print(coll);

	asso_inserter(coll) = 44;
	asso_inserter(coll) = 55;

	print(coll);

	vector<int> vals = {33, 67, -4,13,5,2};
	copy(vals.begin(), vals.end(), asso_inserter(coll));
	print(coll);

	return 0;
}
