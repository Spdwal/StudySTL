#include<set>
#include<list>
#include<algorithm>
#include<iterator>
#include<iostream>
using namespace std;

template<typename T>
void print(const T & container)
{
    for(auto elem: container)
    {
        cout << elem << endl;
    }
    cout << endl;
}

int main()
{
    set<int> coll;
    insert_iterator<set<int>> iter(coll,coll.begin());
    *iter = 1;
    iter ++;
    *iter = 2;
    iter++;
    *iter = 3;

    print(coll);

    inserter(coll, coll.end()) = 44;
    inserter(coll, coll.end()) = 55;

    print(coll);

    list<int> coll2;

    copy(coll.begin(), coll.end(), inserter(coll2, coll2.begin()));

    print(coll2);

    copy(coll.begin(), coll.end(), inserter(coll2, ++coll2.begin()));

    print(coll2);

    return 0;
}
