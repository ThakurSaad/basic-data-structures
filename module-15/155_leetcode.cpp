// https://leetcode.com/problems/min-stack/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class MinStack
{
public:
    stack<int> st, min_stack;

    MinStack() {}

    void push(int val)
    {
        st.push(val);

        if (min_stack.empty())
        {
            min_stack.push(val);
        }
        else if (min_stack.top() >= val)
        {
            min_stack.push(val);
        }
    }

    void pop()
    {
        if (st.top() == min_stack.top())
        {
            min_stack.pop();
        }
        st.pop();
    }

    int top() { return st.top(); }

    int getMin() { return min_stack.top(); }
};
