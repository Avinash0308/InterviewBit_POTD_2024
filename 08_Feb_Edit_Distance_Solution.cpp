#include <bits/stdc++.h>
using namespace std;
int solve(string &s1, string &s2, vector<vector<int>> &dp, int n, int m, int x, int y)
{
    if (x == n && y == m)
        return 0;
    if (x == n)
        return m - y;
    if (y == m)
        return n - x;
    if (dp[x][y] != -1)
        return dp[x][y];
    if (s1[x] == s2[y])
        return dp[x][y] = solve(s1, s2, dp, n, m, x + 1, y + 1);
    else
        return dp[x][y] = 1 + min({solve(s1, s2, dp, n, m, x, y + 1), solve(s1, s2, dp, n, m, x + 1, y), solve(s1, s2, dp, n, m, x + 1, y + 1)});
}

int minDistance(string A, string B)
{
    int n = A.size(), m = B.size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    return solve(A, B, dp, n, m, 0, 0);
}
