#include <bits/stdc++.h>
using namespace std;
int trap(const vector<int> &A)
{
    int n = A.size();
    int ans = 0;
    int cur = 0;
    int height = A[0], ind = 0;
    int biggest = A[0];
    for (int i = 1; i < n; i++)
    {
        if (A[i] >= height)
        {
            ans += (height * (i - 1 - ind) - cur);
            cur = 0;
            height = A[i];
            ind = i;
        }
        else
        {
            cur += A[i];
        }
        biggest = max(biggest, A[i]);
    }
    if (A[n - 1] == biggest)
        return ans;
    cur = 0, height = A[n - 1], ind = n - 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (A[i] >= height)
        {
            ans += (height * (ind - i - 1) - cur);
            cur = 0;
            height = A[i];
            ind = i;
        }
        else
        {
            cur += A[i];
        }
        if (A[i] == biggest)
            break;
    }
    return ans;
}
