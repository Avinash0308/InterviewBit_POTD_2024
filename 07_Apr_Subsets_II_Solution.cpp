#include <bits/stdc++.h>
using namespace std;

void solve(int ind, vector<int> &cur, vector<vector<int>> &ans, vector<int> &v)
{
    if (ind == v.size())
    {
        if (!cur.empty())
        {
            ans.push_back(cur);
        }
        return;
    }
    int n = v.size();
    cur.push_back(v[ind]);
    solve(ind + 1, cur, ans, v);
    cur.pop_back();
    while (ind + 1 < n && v[ind] == v[ind + 1])
        ind++;
    solve(ind + 1, cur, ans, v);
}
vector<vector<int>> subsetsWithDup(vector<int> &A)
{
    vector<vector<int>> ans;
    vector<int> cur;
    ans.push_back(cur);
    sort(A.begin(), A.end());
    solve(0, cur, ans, A);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    return 0;
}