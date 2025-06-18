#include <bits/stdc++.h>
using namespace std;

int main()
{
    // type 1
    // vector<int> v;

    // type 2
    // vector<int> v(5);

    // type 3
    // vector<int> v(6, -3);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // type 4
    // vector<int> v2(v);

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // type 5
    // int a[40] = {1, 2, 3, 4, 5, 6, 7};

    // vector<int> v(a, a + 40);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // type 6
    vector<int> v = {1, 2, 3, 4, 5, 4, 3};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << v.size() << endl;
    return 0;
}