#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = v;

    // vector<int> v2;
    // v.assign();
    v2.insert(v2.begin() + 1, {200, 300, 400, 5600, 31, 400, 31, 20, 400});

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << endl;
    // }

    // v2.erase(v2.begin() + 1, v2.begin() + 4);
    // v2.erase(v2.begin() + 3, v2.end());
    // replace(v2.begin(), v2.end() - 1, 400, 99);

    auto it = find(v2.begin(), v2.end(), 5);
    cout << *it << endl;

    if (it == v2.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }

    // for (int x : v2)
    // {
    //     cout << x << " ";
    // }

    return 0;
}