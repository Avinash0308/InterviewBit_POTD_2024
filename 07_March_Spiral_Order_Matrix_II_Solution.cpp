#include <bits/stdc++.h>
using namespace std;

void fill(vector<vector<int>> &ans, int i, int &val, int &A)
{
    for (int j = i; j < A - i; j++)
    {
        ans[i][j] = val++;
    }
    for (int k = i + 1; k < A - i; k++)
    {
        ans[k][A - i - 1] = val++;
    }
    for (int j = A - i - 2; j >= i; j--)
    {
        ans[A - i - 1][j] = val++;
    }
    for (int k = A - i - 2; k > i; k--)
    {
        ans[k][i] = val++;
    }
}
vector<vector<int>> generateMatrix(int A)
{
    vector<vector<int>> ans(A, vector<int>(A));
    int val = 1;
    for (int i = 0; i < ((A + 1) / 2); i++)
    {
        fill(ans, i, val, A);
    }
    return ans;
}

int main()
{
    return 0;
}