#include <bits/stdc++.h>
using namespace std;

int getSum(stack<int> st)
{
    int sum = 0;
    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }
    return sum;
}

int maxSum(stack<int> &st1, stack<int> &st2, stack<int> &st3)
{
    int sum1 = getSum(st1),
        sum2 = getSum(st2),
        sum3 = getSum(st3);

    while (true)
    {
        if (sum1 == sum2 && sum2 == sum3)
            break;

        if (sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= st1.top();
            st1.pop();
        }
        else if (sum2 >= sum3 && sum2 >= sum3)
        {
            sum2 -= st2.top();
            st2.pop();
        }
        else if (sum3 >= sum1 && sum3 >= sum1)
        {
            sum3 -= st3.top();
            st3.pop();
        }
    }
}

int main()
{
    return 0;
}