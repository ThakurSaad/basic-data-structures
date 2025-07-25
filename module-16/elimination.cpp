#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        stack<int> st;

        for (char c : s)
        {
            if (c == '1')
            {
                if (!st.empty() && st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
            else
            {
                st.push(c);
            }
        }

        if (st.empty())
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}