#include <bits/stdc++.h>
using namespace std;
vector<int> Solution::plusOne(vector<int> &A)
{
    vector<int> ans;
    int n = A.size();
    int rem = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (!rem)
            ans.push_back(A[i]);
        else if (A[i] == 9)
            ans.push_back(0);
        else
        {
            ans.push_back(A[i] + 1);
            rem = 0;
        }
    }
    if (rem)
        ans.push_back(1);
    while (ans.size() > 1 && ans.back() == 0)
        ans.pop_back();
    reverse(ans.begin(), ans.end());
    return ans;
}
