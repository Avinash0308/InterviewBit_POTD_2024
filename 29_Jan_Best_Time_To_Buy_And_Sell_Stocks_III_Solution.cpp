#include <bits/stdc++.h>
using namespace std;
int maxProfit(const vector<int> &A)
{
    if (A.empty())
        return 0;
    int n = A.size();
    vector<int> left(n), right(n);
    int val = INT_MAX, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (val >= A[i])
            val = A[i];
        else
            ans = max(ans, A[i] - val);
        right[i] = ans;
    }
    val = INT_MIN, ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (val <= A[i])
            val = A[i];
        else
            ans = max(ans, val - A[i]);
        left[i] = ans;
    }
    ans = max(right[n - 1], left[0]);
    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, right[i] + left[i + 1]);
    }
    return ans;
}
