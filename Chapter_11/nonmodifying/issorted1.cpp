#include"algostuff.hpp"
using namespace std;

int main()
{
	vector<int>coll1 = {1,1,2,3,4,5,6,7,8,9};
	if(is_sorted(coll1.begin(), coll1.end()))
	{
		cout << "coll1 is sorted" << endl;
	}else{
		cout << "coll1 is not sorted" << endl;
	}

	map<int, string> coll2;

	coll2 = {{1, "bill"}, {2,"jim"}, {3, "Nico"}, {4, "Liu"}};

	PRINT_MAPPED_ELEMENTS(coll2, "coll2:   ");

	auto compareName = [] (const pair<int, string>& e1,
						   const pair<int, string>& e2){
		return e1.second < e2.second;
	};

	if(is_sorted(coll2.cbegin(), coll2.cend(), compareName))
	{
		cout << "names in coll2 are sorted" << endl;
	}else{
		cout << "names in coll2 are not sorted"<< endl;
	}

	auto pos = is_sorted_until(coll2.cbegin(), coll2.cend(), compareName);
	if(pos != coll2.end())
	{
		cout << "first unsorted name: " << pos->second << endl;
	}

	return 0;
}
