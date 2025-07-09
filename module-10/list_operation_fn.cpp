#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 23, 432, 5426, 23, 23, 43, 545, 23, 45};

    // l.remove(23);

    l.sort(greater<int>()); // descending

    l.unique();

    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}