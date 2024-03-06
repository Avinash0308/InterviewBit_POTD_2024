#include <bits/stdc++.h>
using namespace std;
struct Interval
{
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

bool comp(Interval a, Interval b)
{
    if (a.start < b.start)
        return true;
    else if (a.start == b.start)
        return a.end < b.end;
    else
        return false;
}
vector<Interval> merge(vector<Interval> &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> ans;
    sort(A.begin(), A.end(), comp);
    int n = A.size();
    ans.push_back(A[0]);
    int ind = 0;
    for (int i = 1; i < n; i++)
    {
        if (A[i].start <= ans[ind].end)
        {
            ans[ind].end = max(ans[ind].end, A[i].end);
        }
        else
        {
            ans.push_back(A[i]);
            ind++;
        }
    }
    return ans;
}