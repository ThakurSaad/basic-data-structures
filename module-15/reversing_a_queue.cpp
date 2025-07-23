// https://www.naukri.com/code360/problems/reversing-a-queue_982934?leftPanelTabValue=PROBLEM&count=25&page=1&search=reversing%20a%20queue&sort_entity=order&sort_order=ASC&customSource=studio_nav

#include <bits/stdc++.h>
using namespace std;

queue<int> reverseQueue(queue<int> q)
{
    stack<int> st;

    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    return q;
}

int main()
{

    return 0;
}