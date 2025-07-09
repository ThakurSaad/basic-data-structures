#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l(10, 5);
    list<int> l2(l);

    int a[] = {2, 3, 4, 5, 6, 6};
    list<int> l3(a, a + 6);

    vector<int> v = {2, 3, 4, 5, 6, 6, 4, 5, 76, 8, 56, 4, 3};
    list<int> l4(v.begin(), v.end());

    cout << l4.size() << endl;
    l4.clear();
    cout << l4.size() << endl;
    l4.resize(50);
    cout << l4.empty() << endl;
    cout << l4.size() << endl;

    return 0;
}