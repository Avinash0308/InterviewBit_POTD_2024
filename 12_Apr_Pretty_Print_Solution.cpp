#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> prettyPrint(int A)
{
    int len = A * 2 - 1;
    vector<vector<int>> ans(len, vector<int>(len));
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            int a = i, b = j, c = len - i - 1, d = len - j - 1;
            ans[i][j] = A - min({a, b, c, d});
        }
    }
    return ans;
}

int main()
{
    return 0;
}