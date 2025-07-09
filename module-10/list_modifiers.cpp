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

    l4.pop_back();
    l4.pop_front();

    l4.insert(next(l4.begin(), 5), l3.begin(), l3.end());

    l4.erase(next(l4.begin(), 2));

    l4.erase(next(l4.begin(), 2), next(l4.begin(), 7));

    auto it = find(l4.begin(), l4.end(), 6);

    if (it == l.end())
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    for (int val : l4)
    {
        cout << val << " ";
    }

    return 0;
}