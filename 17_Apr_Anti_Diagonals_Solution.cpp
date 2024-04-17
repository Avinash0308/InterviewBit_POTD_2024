#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> diagonal(vector<vector<int>> &A)
{
    vector<vector<int>> ans;
    int n = A.size();
    for (int k = 0; k < 2 * n - 1; k++)
    {
        vector<int> cur;
        int i = max(0, k - (n - 1));
        int j = min(n - 1, k);
        while (i < n && j >= 0)
        {
            cur.push_back(A[i][j]);
            i++;
            j--;
        }
        ans.push_back(cur);
    }
    return ans;
}

int main()
{
    return 0;
}