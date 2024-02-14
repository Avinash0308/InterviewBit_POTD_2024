#include <bits/stdc++.h>
using namespace std;
int solve(int a, int b, int c, string &s1, string &s2, string &s3, int x, int y, int z, vector<vector<int>> &dp)
{
    if (a == x && b == y)
        return 1;
    if (dp[a][b] != -1)
        return dp[a][b];
    if ((a < x && s1[a] == s3[c]))
    {
        dp[a][b] = solve(a + 1, b, c + 1, s1, s2, s3, x, y, z, dp);
    }
    if ((b < y && s2[b] == s3[c] && dp[a][b] != 1))
    {
        dp[a][b] = solve(a, b + 1, c + 1, s1, s2, s3, x, y, z, dp);
    }
    if (dp[a][b] == -1)
        return dp[a][b] = 0;
    return dp[a][b];
}

int interLeave(string A, string B, string C)
{
    int n = A.size(), m = B.size(), o = C.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    return solve(0, 0, 0, A, B, C, n, m, o, dp);
}
