#include <bits/stdc++.h>
using namespace std;
int maxProduct(const vector<int> &A)
{
    int ans = INT_MIN;
    int cur = 1;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        cur *= A[i];
        ans = max(ans, cur);
        if (A[i] == 0)
            cur = 1;
    }
    cur = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        cur *= A[i];
        ans = max(ans, cur);
        if (A[i] == 0)
            cur = 1;
    }
    return ans;
}
