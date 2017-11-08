#include<iostream>
#include<exception>
#include"Stack.hpp"
using namespace std;

int main()
{
    try{
        Stack<int> st;
        st.push(1);
        st.push(2);
        st.push(3);

        cout << st.pop() << ' ' ;
        cout << st.pop() << ' ';

        st.top() = 77;
        st.push(4);
        st.push(5);

        st.pop();

        cout << st.pop() << ' ';
        cout << st.pop() << ' ';
        cout << st.pop() << ' ';
    }
    catch(const exception& e)
    {
        cerr << "EXCPETION: " << e.what() << endl;
    }

    return 0;
}
