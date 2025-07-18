#include <bits/stdc++.h>
using namespace std;

void print_forward(list<int> l)
{
    cout << "L -> ";
    for (auto val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

void print_backward(list<int> l)
{
    list<int> l2(l);
    l2.reverse();
    cout << "R -> ";
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
            print_forward(l);
            print_backward(l);
        }
        else if (x == 1)
        {
            l.push_back(v);
            print_forward(l);
            print_backward(l);
        }
        else if (x == 2)
        {
            if (l.empty())
            {
                print_forward(l);
                print_backward(l);
                continue;
            }

            if (v == 0)
            {
                l.pop_front();
                print_forward(l);
                print_backward(l);
            }
            else if (v == (sz - 1))
            {
                l.pop_back();
                print_forward(l);
                print_backward(l);
            }
            else if (v < (sz - 1))
            {
                l.erase(next(l.begin(), v));
                print_forward(l);
                print_backward(l);
            }
            else
            {
                print_forward(l);
                print_backward(l);
            }
        }
    }

    return 0;
}