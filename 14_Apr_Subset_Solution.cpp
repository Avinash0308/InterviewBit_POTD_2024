#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &ans, vector<int> &cur, int ind, int n, vector<int> &A)
{
    if (ind == n)
    {
        ans.push_back(cur);
        return;
    }
    solve(ans, cur, ind + 1, n, A);
    cur.push_back(A[ind]);
    solve(ans, cur, ind + 1, n, A);
    cur.pop_back();
}
vector<vector<int>> subsets(vector<int> &A)
{
    vector<vector<int>> ans;
    vector<int> cur;
    sort(A.begin(), A.end());
    solve(ans, cur, 0, A.size(), A);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    return 0;
}