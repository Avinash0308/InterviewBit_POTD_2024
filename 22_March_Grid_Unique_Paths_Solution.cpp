#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int A, int B)
{
    vector<int> prev(B);
    vector<int> curr(B);
    prev[0] = 1;
    for (int j = 0; j < A; j++)
    {
        for (int i = 0; i < B; i++)
        {
            curr[i] = prev[i];
            if (i > 0)
                curr[i] += curr[i - 1];
        }
        prev = curr;
    }
    return prev[B - 1];
}

int main()
{
    return 0;
}