#include<iostream>
#include<numeric>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> coll = {1,2,3,5,7,11,13,17,19,77};
    for(auto elem : coll)
    {
        cout << elem << endl;
    }
    cout << endl;

    coll.insert({-7,17,33,-11,17,19,1,13});
    for(auto elem : coll)
    {
        cout << elem << endl;
    }
    cout << endl;

    coll.erase(33);
    for(auto elem: coll)
    {
        cout << elem << endl;
    }
    cout << endl;

    if(coll.find(19) != coll.end())
    {
        cout << "19 is avalable" << endl;
    }

    unordered_set<int>::iterator pos;
    for(pos = coll.begin(); pos != coll.end();)
    {
        if(*pos < 0)
        {
            pos = coll.erase(pos);
        }else
        {
            ++ pos;
        }
    }

    for(auto elem : coll)
    {
        cout << elem << endl;
    }

    return 0;
}
