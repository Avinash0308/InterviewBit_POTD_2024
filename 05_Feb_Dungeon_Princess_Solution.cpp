#include <bits/stdc++.h>
using namespace std;

int calculateMinimumHP(vector<vector<int>> &A)
{
    int m = A.size(), i, j;
    if (m == 0)
    {
        return 0;
    }
    int n = A[0].size();
    if (n == 0)
    {
        return 0;
    }
    int dp[m][n];
    dp[m - 1][n - 1] = std::max(0 - A[m - 1][n - 1], 0);
    for (i = m - 2; i >= 0; --i)
    {
        dp[i][n - 1] = std::max(dp[i + 1][n - 1] - A[i][n - 1], 0);
    }
    for (j = n - 2; j >= 0; --j)
    {
        dp[m - 1][j] = std::max(dp[m - 1][j + 1] - A[m - 1][j], 0);
    }

    for (i = m - 2; i >= 0; --i)
    {
        for (j = n - 2; j >= 0; --j)
        {
            dp[i][j] = std::max(std::min(dp[i][j + 1], dp[i + 1][j]) - A[i][j], 0);
        }
    }

    return dp[0][0] + 1;
}
