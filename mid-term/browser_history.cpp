#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> history;
    string site;

    while (cin >> site && site != "end")
        history.push_back(site);

    int q;
    cin >> q;

    auto current = history.begin();

    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "visit")
        {
            string siteName;
            cin >> siteName;

            auto isFound = find(history.begin(), history.end(), siteName);

            if (isFound != history.end())
            {
                cout << *isFound << endl;
                current = isFound;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "next")
        {
            if (next(current) != history.end())
            {
                current = next(current);
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (current == history.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current = prev(current);
                cout << *current << endl;
            }
        }
    }

    return 0;
}