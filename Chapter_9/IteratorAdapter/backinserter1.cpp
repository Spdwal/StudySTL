#include<vector>
#include<algorithm>
#include<iterator>
#include<iostream>
using namespace std;

void print(const vector<int> &ivec)
{
	for(auto elem: ivec)
	{
		cout << elem << endl;
	}
	cout << endl;
}

int main()
{
	vector<int> coll;
	back_insert_iterator<vector<int>> iter(coll);

	*iter = 1;
	iter++;
	*iter = 2;
	iter++;
	*iter = 3;
	iter++;

	print(coll);

	back_inserter(coll) = 44;
	back_inserter(coll)= 55;
	print(coll);

	coll.reserve(2*coll.size());
	copy(coll.begin(), coll.end(), back_inserter(coll));
	print(coll);

	return 0;
}








