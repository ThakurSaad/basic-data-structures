#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    else if (n == 2)
    {
        cout << "No Equilibrium";
        return 0;
    }

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> prefix_sum(n);
    prefix_sum[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + v[i];
    }

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        int l_sum = prefix_sum[i] - v[i],
            r_sum = prefix_sum[n - 1] - prefix_sum[i];

        if (l_sum == r_sum)
        {
            cout << i << endl;
            flag = 1;
        }
    }

    if (!flag)
    {
        cout << "No Equilibrium";
    }

    return 0;
}