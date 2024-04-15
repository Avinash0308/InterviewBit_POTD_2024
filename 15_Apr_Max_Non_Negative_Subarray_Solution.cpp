#include <bits/stdc++.h>
using namespace std;

vector<int> maxset(vector<int> &A)
{
    long long int cur = 0;
    long long int maxy = INT_MIN;
    vector<int> res;
    vector<int> arr;
    for (auto val : A)
    {
        if (val < 0)
        {
            cur = 0;
            arr.resize(0);
        }
        else
        {
            cur += val;
            arr.push_back(val);
        }
        if ((cur > maxy) || (cur == maxy && arr.size() >= res.size()))
        {
            maxy = cur;
            res = arr;
        }
    }
    return res;
}

int main()
{
    return 0;
}