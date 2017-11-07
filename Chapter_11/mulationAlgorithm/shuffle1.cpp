#include<cstdlib>
#include<random>
#include"algostuff.hpp"
using namespace std;

int main()
{
	vector<int> coll;
	INSERT_ELEMENTS(coll, 1, 9);
	PRINT_ELEMENTS(coll, "coll:  ");

	random_shuffle(coll.begin(), coll.end());

	PRINT_ELEMENTS(coll, "shuffled:  ");

	sort(coll.begin(), coll.end());
	PRINT_ELEMENTS(coll, "sorted:  ");

	default_random_engine dre;

	shuffle(coll.begin(), coll.end(), dre);

	PRINT_ELEMENTS(coll, "shuffled:  ");

	return 0;
}
