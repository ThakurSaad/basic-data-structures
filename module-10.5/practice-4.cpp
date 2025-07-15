#include <bits/stdc++.h>
using namespace std;

void print_list_forward(list<int> l)
{
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

void print_list_backward(list<int> l)
{
    list<int> l2(l);
    l2.reverse();

    for (auto val : l2)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    int q;
    list<int> l;

    cin >> q;
    while (q--)
    {
        int x,
            v;

        cin >> x >> v;
        int sz = l.size();

        if (x == 0)
        {
            l.push_front(v);
            print_list_forward(l);
            print_list_backward(l);
        }
        else if (x <= sz)
        {
            if (x == sz)
            {
                l.push_back(v);
                print_list_forward(l);
                print_list_backward(l);
            }
            else
            {
                l.insert(next(l.begin(), x), v);
                print_list_forward(l);
                print_list_backward(l);
            }
        }
        else if (x > (sz - 1))
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}