#include<iostream>
#include<algorithm>
#include<list>
#include<vector>
#include<deque>

using namespace std;

int main()
{
	list<int> coll1 = {1,2,3,4,5,6,7,8,9,10};
	vector<int> coll2;

	coll2.resize(coll1.size());

	copy(coll1.begin(), coll1.end(), coll2.begin());
	deque<int> coll3(coll1.size());

	copy(coll1.begin(), coll1.end(), coll3.begin());

	for(auto c : coll2)
	{
		cout<< c << endl;
	}

	for(auto c: coll3)
	{
		cout<<c<<endl;
	}

	return 0;
}
