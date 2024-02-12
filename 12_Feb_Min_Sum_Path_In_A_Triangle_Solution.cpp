#include <bits/stdc++.h>
using namespace std;
int minimumTotal(vector<vector<int>> &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = A.size();
    for (int i = n - 2; i >= 0; i--)
    {
        int m = A[i].size();
        for (int j = 0; j < m; j++)
        {
            A[i][j] += min(A[i + 1][j], A[i + 1][j + 1]);
        }
    }
    return A[0][0];
}
