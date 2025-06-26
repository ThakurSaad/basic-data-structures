#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int it_count = x / 2,
        space = x,
        slash_1 = 1,
        slash_2 = x;

    // first part
    for (int i = 1; i <= it_count; i++)
    {
        for (int i = 1; i <= space; i++)
        {
            if (i == slash_1)
            {
                cout << "\\";
            }
            else if (i == slash_2)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;

        slash_1++;
        slash_2--;
    }

    // middle part
    for (int i = 1; i < (x / 2) + 1; i++)
    {
        cout << " ";
    }

    cout << "X" << endl;

    // last part
    for (int i = 0; i <= it_count; i++)
    {
        if (i == 0)
        {
            slash_1++;
            slash_2--;
            continue;
        }

        for (int i = 1; i <= space; i++)
        {
            if (i == slash_1)
            {
                cout << "\\";
            }
            else if (i == slash_2)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;

        slash_1++;
        slash_2--;
    }

    return 0;
}