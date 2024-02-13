#include <bits/stdc++.h>
using namespace std;
int canJump(vector<int> &A)
{
    int n = A.size();
    int maxy = 0;
    for (int i = 0; i < n;)
    {
        int maxy1 = 0;
        while (i < n && i <= maxy)
        {
            maxy1 = max(maxy1, i + A[i]);
            i++;
        }
        if (maxy1 == maxy && (maxy != n - 1 && maxy != n))
            return 0;
        if (i == n - 1 || i == n)
            return 1;
        maxy = maxy1;
        if (maxy >= n - 1)
            return 1;
    }
    return 0;
}
