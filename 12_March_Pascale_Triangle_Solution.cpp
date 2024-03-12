#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> solve(int A)
{
    if (A == 0)
        return {};
    if (A == 1)
        return {{1}};
    vector<vector<int>> res;
    res.push_back({1});
    for (int i = 1; i < A; i++)
    {
        vector<int> last = res[i - 1];
        vector<int> cur;
        cur.push_back(1);
        for (int j = 1; j < i; j++)
        {
            cur.push_back(last[j] + last[j - 1]);
        }
        cur.push_back(1);
        res.push_back(cur);
    }
    return res;
}

int main()
{

    return 0;
}