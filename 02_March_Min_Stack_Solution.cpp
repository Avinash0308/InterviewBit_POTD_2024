#include <bits/stdc++.h>
using namespace std;
stack<pair<long long int, long long int>> s;
long long int maxy;
long long int miny;
/*MinStack::MinStack()
{
    while (!(s.empty()))
        s.pop();
    maxy = miny = 1e9 + 7;
}

void MinStack::push(int x)
{
    miny = min(miny, (long long int)x);
    s.push({x, miny});
}

void MinStack::pop()
{
    if (s.empty())
        return;
    s.pop();
    if (s.empty())
        miny = maxy;
    else
        miny = s.top().second;
}

int MinStack::top()
{
    if (s.empty())
        return -1;
    else
        return s.top().first;
}

int MinStack::getMin()
{
    if (miny == (maxy))
        return -1;
    return miny;
}
*/
int main()
{

    return 0;
}