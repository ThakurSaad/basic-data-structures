// https://leetcode.com/problems/backspace-string-compare/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> st;
        stack<char> st2;

        for (char c : s)
        {
            if ((int)c == 35)
            {
                if (!st.empty())
                {
                    st.pop();
                }
            }
            else
            {
                st.push(c);
            }
        }

        for (char c : t)
        {
            if ((int)c == 35)
            {
                if (!st2.empty())
                {
                    st2.pop();
                }
            }
            else
            {
                st2.push(c);
            }
        }

        return st == st2;
    }
};