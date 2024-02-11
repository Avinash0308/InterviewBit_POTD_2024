#include <bits/stdc++.h>
using namespace std;
int _isMatch(const string &s, int sStart, int sLen, const string &p, int pStart, int pLen)
{
    int i;
    if (pLen == pStart)
    {
        return sLen == sStart;
    }
    if (pStart == pLen - 1)
    {
        if (sStart >= sLen)
        {
            return 0;
        }
        else if ((p.at(pStart) != s.at(sStart)) && (p.at(pStart) != '.'))
        {
            return 0;
        }
        else
        {
            return _isMatch(s, sStart + 1, sLen, p, pStart + 1, pLen);
        }
    }
    if (p.at(pStart + 1) != '*')
    {
        if (sStart >= sLen)
        {
            return 0;
        }
        if ((p.at(pStart) != s.at(sStart)) && (p.at(pStart) != '.'))
        {
            return 0;
        }
        else
        {
            return _isMatch(s, sStart + 1, sLen, p, pStart + 1, pLen);
        }
    }
    else
    {
        if (_isMatch(s, sStart, sLen, p, pStart + 2, pLen))
        {
            return 1;
        }
        i = sStart;
        while (i < sLen && (s.at(i) == p.at(pStart) || p.at(pStart) == '.'))
        {
            if (_isMatch(s, i + 1, sLen, p, pStart + 2, pLen))
            {
                return 1;
            }
            ++i;
        }
        return false;
    }
}
int isMatch(const string s, const string p)
{
    int m = s.length(), pLen = p.length();
    return _isMatch(s, 0, m, p, 0, pLen);
}
