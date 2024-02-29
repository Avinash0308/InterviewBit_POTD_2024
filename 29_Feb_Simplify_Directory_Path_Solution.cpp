#include <bits/stdc++.h>
using namespace std;
string simplifyPath(string A)
{
    string s = "";
    int n = A.size(), back = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        string str = "";
        while (A[i] >= 'a' && A[i] <= 'z')
            str += A[i--];
        if (!str.empty())
        {
            if (!back)
                s += str;
            else
                back--;
        }

        if (A[i] == '/' && !s.empty() && s.back() != '/')
            s += '/';

        if (A[i] == '.' && A[i - 1] == '.')
        {
            back++;
            i--;
        }
    }

    return s.empty() ? "/" : string(rbegin(s), rend(s));
}