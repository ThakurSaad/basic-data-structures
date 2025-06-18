#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(10);
    v.push_back(20);
    v.push_back(11);
    v.push_back(8);
    v.push_back(8);

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    cout << v[3] << endl;

    return 0;
}