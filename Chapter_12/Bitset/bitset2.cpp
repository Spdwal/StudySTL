#include<bitset>
#include<iostream>
#include<string>
#include<limits>

using namespace std;

int main()
{
    cout << "267 as binary short:   "
         << bitset<numeric_limits<unsigned short>::digits>(267)
         << endl;

    cout << "267 as binary long:    "
         << bitset<numeric_limits<unsigned long>::digits>(267)
         << endl;

    cout << "10,000,000 with 24 bits:  "
         << bitset<24>(1e7) << endl;

    string s = bitset<42>(12345678).to_string();

    cout << "12,345,678 with 42bits: " << s << endl;


    return 0;
}
