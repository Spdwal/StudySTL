#include<forward_list>
#include<iostream>
using namespace std;

int main()
{
    forward_list<int> list = {1,2,3,4,5,6,7,8,9};
    auto posBefore = list.before_begin();
    for(auto pos = list.begin(); pos != list.end(); ++pos, ++posBefore)
    {
        if(*pos % 2 == 0)
        {
            break;
        }
    }

    list.insert_after(posBefore, 42);
    for(auto c: list)
    {
        cout << c << endl;
    }
}
