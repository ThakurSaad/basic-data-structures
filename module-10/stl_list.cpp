#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l(10, 5);
    list<int> l2(l);

    int a[] = {2, 3, 4, 5, 6, 6};
    list<int> l3(a, a + 6);

    vector<int> v = {2, 3, 4, 5, 6, 6, 4, 5, 76, 8, 56, 4, 3};
    list<int> l4(v.begin(), v.end());

    for (auto it = l.begin(); it != l.end(); it++)
    {
        // cout << *it  << endl;
    }

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    for (int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;
    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;
    for (int val : l4)
    {
        cout << val << " ";
    }

    return 0;
}