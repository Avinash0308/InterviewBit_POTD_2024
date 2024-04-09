#include <bits/stdc++.h>
using namespace std;

vector<int> flip(string A)
{
    int start = 0, end = -1, maxy = 0;
    int l = 0, r = 0;
    int cur = 0;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        if (A[i] == '1')
            cur--;
        else
            cur++;
        if (cur > maxy)
        {
            l = start + 1;
            r = i + 1;
            end = i;
            maxy = cur;
        }
        if (cur < 0)
        {
            start = i + 1;
            cur = 0;
            end = start;
        }
    }
    if (maxy == 0)
        return {};
    else
        return {l, r};
}

int main()
{
    return 0;
}