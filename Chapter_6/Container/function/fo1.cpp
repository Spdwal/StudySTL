#include<deque>
#include<algorithm>
#include<functional>
#include<iostream>
#include"print.hpp"
using namespace std;

int main()
{
	deque<int>coll = {1,2,3,4,5,6,7,8,9,10};
	PRINT_ELEMENTS(coll, "initialized: ");

	transform(coll.cbegin(), coll.cend(), coll.begin(), negate<int>());

	PRINT_ELEMENTS(coll, "negated:    ");

	transform(coll.cbegin(), coll.cend(), coll.cbegin(), coll.begin(), multiplies<int>());
	PRINT_ELEMENTS(coll, "squared:    ");

	return 0;
}
