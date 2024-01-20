#include <bits/stdc++.h>
using namespace std;
int solve(int ind, int val, string &A, vector<vector<int>> &dp)
{
    if (ind >= A.size())
        return 1;
    int cur = (int)A[ind] - 48;
    if (dp[ind][val] != -1)
        return dp[ind][val];
    long long int ans = 0;
    long long int mod = 1e9 + 7;
    if (cur != 0)
    {
        ans += solve(ind + 1, cur, A, dp);
    }
    if (val != 0 && val * 10 + cur <= 26)
    {
        ans = (ans + solve(ind + 1, 0, A, dp)) % mod;
    }
    return dp[ind][val] = ans;
}
int numDecodings(string A)
{
    int n = A.size();
    vector<vector<int>> dp(n, vector<int>(27, -1));
    return solve(0, 0, A, dp);
}
