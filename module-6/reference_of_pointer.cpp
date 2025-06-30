#include <bits/stdc++.h>
using namespace std;

void fun(int *&p)
{
    // *p = 100;
    // int y = 11;
    // p = &y;
    // cout << "In fun " << *p << endl;
    cout << "In fun " << &p << endl;
}

int main()
{
    int x = 10;
    int *p = &x;

    fun(p);

    // cout << "In Main " << *p << endl;
    cout << "In Main " << &p << endl;

    return 0;
}