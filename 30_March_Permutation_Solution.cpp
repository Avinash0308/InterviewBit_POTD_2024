#include <bits/stdc++.h>
using namespace std;

void solve(int ind, vector<int> &cur, vector<vector<int>> &ans, vector<int> &v, vector<int> &visit)
{
    int n = v.size();
    if (ind == n)
    {
        ans.push_back(cur);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (visit[i] == 0)
        {
            visit[i] = 1;
            cur.push_back(v[i]);
            solve(ind + 1, cur, ans, v, visit);
            visit[i] = 0;
            cur.pop_back();
        }
    }
}
vector<vector<int>> Solution::permute(vector<int> &A)
{
    int n = A.size();
    vector<vector<int>> ans;
    vector<int> cur;
    int ind = 0;
    vector<int> visit(n);
    solve(0, cur, ans, A, visit);
    return ans;
}

int main()
{
    return 0;
}