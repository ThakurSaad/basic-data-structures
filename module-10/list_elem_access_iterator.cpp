#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 8};

    cout << l.back() << endl;
    cout << l.front() << endl;
    cout << *next(l.begin(), 3) << endl;

    cout << *l.begin() << endl;

    return 0;
}