#include<unordered_set>
#include<iostream>
#include"buckets.hpp"

int main()
{
	std::unordered_set<int> intset = {1,2,3,4,7,11,13,17,19};
	printHashTableState(intset);

	intset.insert({-7,27,33,4});
	printHashTableState(intset);
}
