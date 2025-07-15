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
    l.sort();
    print_list(l);

    return 0;
}