#include<array>
#include<algorithm>
#include<functional>
#include<numeric>
#include<iostream>
using namespace std;

int main()
{
    array<int,10> a = {11,22,33,44};
    a.back() = 999999;
    a[a.size() - 2] = 42;
    for(const auto &c : a)
    {
        cout << c << endl;
    }

    cout << "sum:   "
         << accumulate(a.begin(), a.end(), 0)
         << endl;

    transform(a.begin(), a.end(),a.begin(),negate<int>());

    for(const auto &c : a)
    {
        cout << c << endl;
    }

    return 0;
}
