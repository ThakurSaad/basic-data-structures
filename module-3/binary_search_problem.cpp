#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,
        q;
    cin >> n >> q;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

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

            if (a[mid] == x)
            {
                flag = 1;
                break;
            }
            else if (a[mid] > x)
            {
                r = mid - 1;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
        }

        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}