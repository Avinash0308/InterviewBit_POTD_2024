#include <bits/stdc++.h>
using namespace std;

int coverPoints(vector<int> &A, vector<int> &B)
{
    int cur = 0;
    int n = A.size();
    for (int i = 1; i < n; i++)
    {
        cur += max(abs(A[i] - A[i - 1]), abs(B[i] - B[i - 1]));
    }
    return cur;
}

int main()
{
    return 0;
}