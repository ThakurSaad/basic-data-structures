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

    for (int i = 1; i < n - 1; i++)
    {
        int left_sum = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            left_sum += v[j];
            // cout << v[j] << "+";
        }
        // cout << " = " << left_sum << endl;

        int right_sum = 0;
        for (int k = i + 1; k < n; k++)
        {
            right_sum += v[k];
            // cout << v[k] << "+";
        }

        // cout << " = " << right_sum << endl << endl;

        if (left_sum == right_sum)
        {
            cout << i;
            break;
        }
    }

    return 0;
}