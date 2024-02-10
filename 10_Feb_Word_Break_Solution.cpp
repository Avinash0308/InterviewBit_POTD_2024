#include <bits/stdc++.h>
using namespace std;
int wordBreak(string A, vector<string> &B)
{
    int len = A.size();
    unordered_map<string, int> dict;
    for (auto str : B)
    {
        dict[str]++;
    }
    vector<int> dp(len, 0);
    for (int i = len - 1; i >= 0; i--)
    {
        string cur;
        for (int j = i; j < len && !dp[i]; j++)
        {
            cur.push_back(A[j]);
            if (dict.count(cur) != 0)
            {
                if (j == len - 1 || dp[j + 1] == 1)
                {
                    dp[i] = 1;
                }
            }
        }
    }
    return dp[0];
}
