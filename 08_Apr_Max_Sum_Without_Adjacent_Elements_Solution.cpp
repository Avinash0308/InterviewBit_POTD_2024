#include <bits/stdc++.h>
using namespace std;

int adjacent(vector<vector<int>> &A)
{
    int a = 0, b = 0, c = 0;
    int n = A[0].size();
    for (int i = 0; i < n; i++)
    {
        a = max(A[0][i], A[1][i]) + max(a, b);
        swap(a, b);
        swap(c, b);
    }
    return max({a, b, c});
}

int main()
{
    return 0;
}