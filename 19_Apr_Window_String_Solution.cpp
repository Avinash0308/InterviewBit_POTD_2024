#include <bits/stdc++.h>
using namespace std;

string minWindow(string A, string B)
{
    vector<int> cnt(256);
    for (auto c : B)
    {
        cnt[(int)c]++;
    }
    int ans = INT_MAX;
    int ind = -1;
    int start = -1;
    int n = A.size();
    vector<int> count2(256);
    for (int i = 0; i < n; i++)
    {
        count2[int(A[i])]++;
        int pos = 0;
        for (int i = 0; i < 256; i++)
        {
            if (cnt[i] > count2[i])
            {
                pos = 1;
                break;
            }
        }
        if (pos)
            continue;
        while (start < i && count2[int(A[start + 1])] > cnt[int(A[start + 1])])
        {
            count2[int(A[start + 1])]--;
            start++;
        }
        if (ans > i - start)
        {
            ans = i - start;
            ind = start + 1;
        }
    }
    if (ans == INT_MAX)
        return "";
    string str = A.substr(ind, ans);
    return str;
}

int main()
{
    return 0;
}