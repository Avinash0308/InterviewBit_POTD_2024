#include <bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int> &A)
{
    int n = A.size();
    int sum = 0;
    stack<int> left, right;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        while (!(left.empty()) && A[left.top()] >= A[i])
            left.pop();
        if (left.empty())
            a[i] = -1;
        else
            a[i] = left.top();
        left.push(i);
        sum += A[i];
    }
    sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!(right.empty()) && A[right.top()] >= A[i])
            right.pop();
        if (right.empty())
            b[i] = n;
        else
            b[i] = right.top();
        right.push(i);
        sum += A[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        l = (i - a[i]) * A[i];
        r = (b[i] - i) * A[i];
        ans = max(ans, l + r - A[i]);
    }
    return ans;
}
