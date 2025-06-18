#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // vector<int> v(n);
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);

        // cin >> v[i];
    }

    // v.insert(v.begin() + 1, 444);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}