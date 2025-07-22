#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    // q.push(10);
    // cout << q.back() << " ";
    // q.push(20);
    // cout << q.back() << " ";
    // q.push(30);
    // cout << q.back() << " ";
    // q.push(40);
    // cout << q.back() << " ";
    // // q.pop();
    // cout << q.front() << " ";
    // cout << q.size() << " ";
    // cout << endl;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}