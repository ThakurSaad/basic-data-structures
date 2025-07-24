#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    int v;

    while (n--)
    {
        cin >> v;
        st.push(v);
    }

    queue<int> q;
    while (m--)
    {
        cin >> v;
        q.push(v);
    }

    if (st.size() != q.size())
    {
        cout << "NO";
        return 0;
    }

    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO";
            return 0;
        }
        st.pop();
        q.pop();
    }

    cout << "YES";

    return 0;
}