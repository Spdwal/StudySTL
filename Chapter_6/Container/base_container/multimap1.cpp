#include<map>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    multimap<int,string> coll;

    coll={{5,"tagged"},
          {2,"a"},
          {1,"this"},
          {4,"off"},
          {6,"string"},
          {1,"this"},
          {3,"multimap"}};

    for(auto elem: coll){
        cout << elem.second<< ' ';
    }
    cout <<endl;

    return 0;
}
