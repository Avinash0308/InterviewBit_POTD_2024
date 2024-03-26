#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &cur, vector<vector<int>> &res, vector<int> &score, vector<int> &v, int n)
{
    if (cur.size() == n)
    {
        res.push_back(cur);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (score[i] == 0)
        {
            score[i] = 1;
            cur.push_back(v[i]);
            solve(cur, res, score, v, n);
            score[i] = 0;
            cur.pop_back();
            while (i < n - 1 && v[i + 1] == v[i])
                i++;
        }
    }
}
vector<vector<int>> permute(vector<int> &A)
{
    sort(A.begin(), A.end());
    int n = A.size();
    vector<int> score(n);
    vector<vector<int>> res;
    vector<int> cur;
    solve(cur, res, score, A, n);
    return res;
}

int main()
{
    return 0;
}