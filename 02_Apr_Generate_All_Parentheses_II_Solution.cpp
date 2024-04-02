#include <bits/stdc++.h>
using namespace std;

void solve(int open, int close, int a, vector<string> &ans, string &cur)
{
    if (open == close && open == a)
    {
        ans.push_back(cur);
        return;
    }
    if (open < a)
    {
        cur.push_back('(');
        solve(open + 1, close, a, ans, cur);
        cur.pop_back();
    }
    if (open > close)
    {
        cur.push_back(')');
        solve(open, close + 1, a, ans, cur);
        cur.pop_back();
    }
}
vector<string> generateParenthesis(int A)
{
    string cur = "";
    vector<string> ans;
    solve(0, 0, A, ans, cur);
    return ans;
}

int main()
{
    return 0;
}