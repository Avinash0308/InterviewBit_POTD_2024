#include <bits/stdc++.h>
using namespace std;
vector<int> slidingMaximum(const vector<int> &A, int B)
{
    deque<int> q;
    int n = A.size();
    vector<int> ans;
    for (int i = 0; i < n && i < B; i++)
    {
        while (!(q.empty()) && q.front() <= i - B)
            q.pop_front();
        while (!(q.empty()) && A[q.back()] <= A[i])
            q.pop_back();
        q.push_back(i);
    }
    ans.push_back(A[q.front()]);
    for (int i = B; i < n; i++)
    {
        while (!(q.empty()) && q.front() <= i - B)
            q.pop_front();
        while (!(q.empty()) && A[q.back()] <= A[i])
            q.pop_back();
        q.push_back(i);
        ans.push_back(A[q.front()]);
    }
    return ans;
}

int main()
{

    return 0;
}