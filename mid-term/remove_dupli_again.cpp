#include <bits/stdc++.h>
using namespace std;

void print_list(list<int> l)
{
    for (auto val : l)
    {
        cout << val << " ";
    }
}

int main()
{
    list<int> l;
    int val;

    while (true)
    {
        cin >> val;

        if (val == -1)
            break;

        l.push_back(val);
    }

    l.sort();
    l.unique();
    print_list(l);

    return 0;
}