#include <bits/stdc++.h>
using namespace std;
vector<string> wordBreak(string A, vector<string> &B)
{
    int n = A.size();
    vector<vector<string>> dp(n);
    unordered_map<string, int> dict;
    for (auto str : B)
    {
        dict[str]++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        string cur;
        for (int j = i; j < n; j++)
        {
            cur.push_back(A[j]);
            if (dict.count(cur) != 0)
            {
                if (j != n - 1)
                {
                    cur.push_back(' ');
                    for (auto str : dp[j + 1])
                    {
                        string ne = cur + str;
                        dp[i].push_back(ne);
                    }
                    cur.pop_back();
                }
                else
                {
                    dp[i].push_back(cur);
                }
            }
        }
    }
    sort(dp[0].begin(), dp[0].end());
    return dp[0];
}
