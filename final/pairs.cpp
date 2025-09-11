#include <bits/stdc++.h>
using namespace std;

bool ascending_sort(pair<string, int> a, pair<string, int> b)
{
    if (a.first < b.first)
        return true;
    else if (a.first > b.first)
        return false;
    else
        return a.second > b.second;
}

int main()
{
    int t;
    vector<pair<string, int>> v;

    cin >> t;

    while (t--)
    {
        cin.ignore();
        string s;
        int val;
        cin >> s >> val;
        v.push_back({s, val});
    }

    sort(v.begin(), v.end(), ascending_sort);

    for (pair p : v)
        cout << p.first << " " << p.second << "\n";

    return 0;
}