#include <bits/stdc++.h>
using namespace std;

void solve(int val, int n, int ind, int k, vector<int> &v, vector<vector<int>> &ans)
{
    if (ind == k)
    {
        ans.push_back(v);
        return;
    }
    if (val > n)
        return;
    v.push_back(val);
    solve(val + 1, n, ind + 1, k, v, ans);
    v.pop_back();
    solve(val + 1, n, ind, k, v, ans);
}
vector<vector<int>> combine(int A, int B)
{
    vector<vector<int>> ans;
    vector<int> cur;
    solve(1, A, 0, B, cur, ans);
    return ans;
}

int main()
{
    return 0;
}