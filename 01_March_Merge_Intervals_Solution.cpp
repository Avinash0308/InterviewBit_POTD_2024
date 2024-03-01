#include <bits/stdc++.h>
using namespace std;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

vector<Interval> insert(vector<Interval> &intervals, Interval newInterval)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> ans;
    int n = intervals.size();
    int rem = 1;
    for (int i = 0; i < n; i++)
    {
        if (newInterval.end < intervals[i].start && rem)
        {
            rem = 0;
            ans.push_back(newInterval);
            ans.push_back(intervals[i]);
        }
        else if (rem == 0 || intervals[i].end < newInterval.start)
        {
            ans.push_back(intervals[i]);
        }
        else
        {
            newInterval.start = min(newInterval.start, intervals[i].start);
            newInterval.end = max(newInterval.end, intervals[i].end);
        }
    }
    if (rem)
        ans.push_back(newInterval);
    return ans;
}
