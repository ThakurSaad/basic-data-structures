#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    queue<string> qu;

    while (q--)
    {
        cin.ignore();
        int val;
        cin >> val;

        if (val == 0)
        {
            string s;
            cin >> s;
            qu.push(s);
        }
        else
        {
            if (!qu.empty())
            {
                cout << qu.front() << endl;
                qu.pop();
            }
            else if (qu.empty())
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}