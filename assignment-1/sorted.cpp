#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int flag = 0;

        for (int i = 1; i < n; i++)
        {
            int l = a[i - 1],
                r = a[i];

            if (l > r)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}