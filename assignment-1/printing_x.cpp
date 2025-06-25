#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 1; i < x; i++)
    {
        cout << "\n";

        int space_for_slash_1 = 0,
            space_for_slash_2 = x - 1;

        // space for slash 1
        for (int j = space_for_slash_1; j < x; j++)
        {
            // if (j == 1)
            // {
            //     continue;
            // }
            cout << " " << j;
            space_for_slash_1++;
        }

        // slash 1
        // for (int k = 0; k < x; k++)
        // {
        //     if (k == i)
        //     {
        //         cout << "\\";
        //     }
        // }
    }

    return 0;
}