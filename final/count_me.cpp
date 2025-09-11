#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);
        map<string, int> m;
        stringstream ss(s);
        string w, maxWord;
        int maxFreq = 0;

        while (ss >> w)
        {
            m[w]++;
            if (m[w] > maxFreq)
            {
                maxFreq = m[w];
                maxWord = w;
            }
        }
        cout << maxWord
             << " "
             << maxFreq
             << "\n";
    }

    return 0;
}