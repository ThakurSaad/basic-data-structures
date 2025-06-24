#include <bits/stdc++.h>
using namespace std;

int sum(int i, int j)
{
    return i + j;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> runningSum(n);
    runningSum[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        runningSum[i] = sum(runningSum[i - 1], v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << runningSum[i] << " ";
    }

    return 0;
}