#include <bits/stdc++.h>
using namespace std;

bool isBlocked(vector<vector<int>> &matrix, int i, int j)
{
    if (i < 0 || i >= matrix.size() || j < 0 || j >= matrix[0].size())
        return true;
    if (matrix[i][j] == -1)
        return true;
    return false;
}
void dfs(vector<vector<int>> &matrix, int i, int j, int dir, vector<int> &ans)
{
    if (isBlocked(matrix, i, j))
        return;
    bool allBlocked = true;
    for (int k = -1; k <= 1; k += 2)
    {
        allBlocked = allBlocked && isBlocked(matrix, k + i, j) && isBlocked(matrix, i, j + k);
    }
    ans.push_back(matrix[i][j]);
    matrix[i][j] = -1;
    if (allBlocked)
        return;
    int nxt_i = i, nxt_j = j, nxt_dir = dir;
    if (dir == 0)
    {
        if (!isBlocked(matrix, i, j + 1))
        {
            nxt_j++;
        }
        else
        {
            nxt_dir = 1;
            nxt_i++;
        }
    }
    else if (dir == 1)
    {
        if (!isBlocked(matrix, i + 1, j))
        {
            nxt_i++;
        }
        else
        {
            nxt_dir = 2;
            nxt_j--;
        }
    }
    else if (dir == 2)
    {
        if (!isBlocked(matrix, i, j - 1))
        {
            nxt_j--;
        }
        else
        {
            nxt_dir = 3;
            nxt_i--;
        }
    }
    else if (dir == 3)
    {
        if (!isBlocked(matrix, i - 1, j))
        {
            nxt_i--;
        }
        else
        {
            nxt_dir = 0;
            nxt_j++;
        }
    }
    dfs(matrix, nxt_i, nxt_j, nxt_dir, ans);
}
vector<int> Solution::spiralOrder(const vector<vector<int>> &A)
{
    vector<int> ans;
    vector<vector<int>> v = A;
    dfs(v, 0, 0, 0, ans);
    return ans;
}
