#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int A)
{
    vector<int> prime(A + 1, 1);
    for (int i = 2; i * i <= A; i++)
    {
        if (!prime[i])
            continue;
        for (int j = i; j * i <= A; j++)
        {
            prime[j * i] = 0;
        }
    }
    vector<int> ans;
    for (int i = 2; i <= A; i++)
    {
        if (prime[i])
            ans.push_back(i);
    }
    return ans;
}

int main()
{
    return 0;
}