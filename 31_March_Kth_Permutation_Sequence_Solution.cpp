#include <bits/stdc++.h>
using namespace std;

string getPermutation(int A, int B)
{
    string ans;
    vector<long long int> avail(A + 1, 1);
    for (long long int i = A; i >= 1; i--)
    {
        long long int val = i - 1;
        long long int cur = i - 2;
        while (cur >= 1 && val <= B)
        {
            val *= cur;
            cur--;
        }
        if (!val)
            val = 1;
        long long int ind = ((B - 1 )/ val) + 1;
        if (B >= val)
        {
            B -= (ind - 1) * val;
        }
        long long int j = 0;
        while (ind)
        {
            j++;
            if (avail[j])
                ind--;
        }
        avail[j] = 0;
        string th = to_string(j);
        ans += th;
    }
    return ans;
}

int main()
{
    cout << getPermutation(3, 2) << endl;
    return 0;
}