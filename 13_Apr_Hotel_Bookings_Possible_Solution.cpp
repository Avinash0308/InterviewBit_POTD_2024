#include <bits/stdc++.h>
using namespace std;

bool hotel(vector<int> &arrive, vector<int> &depart, int K)
{
    int n = arrive.size();
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = {arrive[i], depart[i]};
    }
    sort(v.begin(), v.end());
    priority_queue<int, vector<int>, greater<int>> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && s.top() < v[i].first)
            s.pop();
        if (s.size() == K)
            return false;
        s.push(v[i].second);
    }
    return true;
}

int main()
{
    return 0;
}