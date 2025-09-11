#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, val, q;
    cin >> t;

    priority_queue<int, vector<int>, greater<int>> pq;

    while (t--)
    {
        cin >> val;
        pq.push(val);
    }

    cin >> q;

    int pos, v;

    while (q--)
    {
        cin >> pos;

        if (pos == 0)
        {
            cin >> v;
            pq.push(v);
        }

        else if (pos == 2)
        {
            if (!pq.empty())
                pq.pop();
        }

        if (!pq.empty())
            cout << pq.top() << endl;
        else
            cout << "Empty" << endl;
    }

    return 0;
}
