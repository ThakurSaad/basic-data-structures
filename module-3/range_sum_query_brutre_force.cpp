#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int a[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int sum;

        for (int i = l; i <= r; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}