
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, n, val;

    cin >> t;

    while (t--)
    {
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> val;
            s.insert(val);
        }
        for (auto it = s.begin(); it != s.end(); it++)
            cout << *it << " ";
        cout << endl;
    }

    return 0;
}
