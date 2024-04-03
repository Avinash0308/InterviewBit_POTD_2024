#include <bits/stdc++.h>
using namespace std;

void solve(int sum, int ind, int total, vector<int> &cur, vector<vector<int>> &ans, vector<int> &v)
{
    if (ind == v.size())
    {
        if (sum == total)
            ans.push_back(cur);
        return;
    }
    if (sum > total)
        return;
    cur.push_back(v[ind]);
    solve(sum + v[ind], ind + 1, total, cur, ans, v);
    cur.pop_back();
    while (ind + 1 < v.size() && v[ind] == v[ind + 1])
        ind++;
    solve(sum, ind + 1, total, cur, ans, v);
}
vector<vector<int>> combinationSum(vector<int> &A, int B)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(), A.end());
    vector<vector<int>> ans;
    vector<int> cur;
    solve(0, 0, B, cur, ans, A);
    return ans;
}

int main()
{
    return 0;
}