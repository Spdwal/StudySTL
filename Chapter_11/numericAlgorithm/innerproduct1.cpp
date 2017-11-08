#include"algostuff.hpp"
using namespace std;

int main()
{
	list<int> coll;
	INSERT_ELEMENTS(coll, 1, 6);
	PRINT_ELEMENTS(coll);

	cout << "inner product: "
		 << inner_product(coll.cbegin(), coll.cend(),
						  coll.cbegin(), 0);
	cout << endl;

	cout << "inner reverse product: "
		 << inner_product(coll.cbegin(), coll.cend(), coll.crbegin(), 0);
	cout << endl;

	cout << "procudt of sums: "
		 << inner_product(coll.cbegin(), coll.cend(),
						  coll.cbegin(), 1,
						  multiplies<int>(), plus<int>())
		 << endl;

	return 0;
}
