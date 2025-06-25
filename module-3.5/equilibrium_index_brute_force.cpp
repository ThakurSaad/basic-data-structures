#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (n == 1)
        {
            cout << 0;
        }
        else if (n == 2)
        {
            cout << "Not Possible";
        }
        else
        {
            int l_sum = 0,
                r_sum = 0;

            for (int l = 0; l < i; l++)
            {
                l_sum += v[l];
            }

            for (int r = i + 1; r < n; r++)
            {
                r_sum += v[r];
            }

            if (l_sum == r_sum)
            {
                cout << i;
                break;
            }
        }
    }

    return 0;
}