#include <bits/stdc++.h>
using namespace std;

void print_list(list<int> l)
{
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

void palindrome_check(list<int> l, list<int> l2)
{
    auto it1 = l.begin();
    auto it2 = l2.begin();
    bool flag = true;

    for (auto it1 = l.begin(), it2 = l2.begin();
         it1 != l.end() && it2 != l2.end();
         it1++, it2++)
    {
        if (*it1 != *it2)
        {
            cout << "NO";
            return;
        }
    }

    if (flag)
        cout << "YES";
}

int main()
{

    list<int> l;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        l.push_back(val);
    }

    list<int> l2(l);
    l2.reverse();

    palindrome_check(l, l2);

    return 0;
}