#include <bits/stdc++.h>
using namespace std;
int longestValidParentheses(string A)
{
    stack<int> s;
    stack<pair<int, int>> l;
    int ans = 0;
    int prev = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == '(')
        {
            s.push(i);
        }
        else
        {
            if (s.empty())
            {
                prev = 0;
            }
            else
            {
                int val = s.top();
                s.pop();
                ans = max(ans, i - val + 1);
                while (!(l.empty()) && l.top().first > val)
                    l.pop();
                if (!(l.empty()) && l.top().first + 1 == val)
                {
                    ans = max(ans, l.top().second + i - val + 1);
                    int value = l.top().second;
                    l.pop();
                    l.push({i, value + i - val + 1});
                }
                else
                {
                    l.push({i, i - val + 1});
                }
            }
        }
    }
    return ans;
}
