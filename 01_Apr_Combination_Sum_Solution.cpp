#include <bits/stdc++.h>
using namespace std;

void solve(int ind, int sum, int n, vector<int> &v, vector<int> &cur, vector<vector<int>> &ans, int &B)
{
    if (sum == B)
    {
        ans.push_back(cur);
        return;
    }
    if (ind == n)
        return;
    if (sum > B)
        return;
    cur.push_back(v[ind]);
    solve(ind, sum + v[ind], n, v, cur, ans, B);
    cur.pop_back();
    while (ind + 1 < n && v[ind] == v[ind + 1])
        ind++;
    solve(ind + 1, sum, n, v, cur, ans, B);
}
vector<vector<int>> combinationSum(vector<int> &A, int B)
{
    vector<vector<int>> ans;
    vector<int> cur;
    sort(A.begin(), A.end());
    int n = A.size();
    solve(0, 0, n, A, cur, ans, B);
    return ans;
}

int main()
{
    return 0;
}