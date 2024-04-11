#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &A, int B)
{
    vector<int> ret;
    int n = A.size();
    for (int i = 0; i < A.size(); i++)
    {
        ret.push_back(A[(i + B) % n]);
    }
    return ret;
}

int main()
{
    return 0;
}