#include<forward_list>
#include<iostream>
using namespace std;

int main()
{
    forward_list<int> l1 = {1, 2, 3, 4, 5};
    forward_list<int> l2 = {97, 98, 99};

    auto pos1 = l1.before_begin();
    for(auto pb1 = l1.begin(); pb1 != l1.end(); ++pb1, ++ pos1)
    {
        if(*pb1 == 3)
            break;
    }


    auto pos2 = l2.before_begin();
    for(auto pb2 = l2.begin(); pb2 != l2.end(); ++pb2, ++pos2)
    {
        if(*pb2 == 99)
        {
            break;
        }
    }

    l1.splice_after(pos2,l2, pos1);

    cout << "l1:" << endl;
    for(auto c :l1)
    {
        cout << c << endl;
    }

    cout << "l2:" << endl;

    for(auto c :l2)
    {
        cout << c << endl;
    }

    return 0;
}
