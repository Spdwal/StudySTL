#include<iostream>
using namespace std;
template<typename T>
void print(const T& container)
{
    for(auto elem: container)
    {
        cout << elem << endl;
    }
    cout << endl;
}
