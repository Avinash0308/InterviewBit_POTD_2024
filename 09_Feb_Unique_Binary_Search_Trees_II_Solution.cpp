#include <bits/stdc++.h>
using namespace std;
int numTrees(int A)
{
    vector<int> v(A + 1);
    v[0] = 1;
    v[1] = 1;
    for (int i = 2; i <= A; i++)
    {
        int ans = 0;
        for (int j = 1; j <= i; j++)
        {
            ans += v[j - 1] * v[i - j];
        }
        v[i] = ans;
    }
    return v[A];
}
