#include <bits/stdc++.h>
using namespace std;
vector<int> Solution::repeatedNumber(const vector<int> &A)
{
    long long int vala = 0, valb = 0;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        long long int val1 = A[i], val2 = i + 1;
        vala += ((val1 * val1) - (val2 * val2));
        valb += (val1 - val2);
    }
    long long int valc = vala / valb;
    int a = (valb + valc) / 2;
    int b = (valc - valb) / 2;
    return {a, b};
}
