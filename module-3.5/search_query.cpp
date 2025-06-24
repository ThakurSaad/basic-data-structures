#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while (q--)
    {
        int x;
        cin >> x;

        int flag = 0,
            l = 0,
            r = n - 1;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (v[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (v[mid] > x)
            {
                r = mid - 1;
            }
            else if (v[mid] < x)
            {
                l = mid + 1;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            ;
        }
    }

    return 0;
}