#include<bits/stdc++.h>
using namespace std;

vector<int> wave(vector<int> &A)
{
    sort(A.begin(), A.end());
    for (int i = 1; i < A.size(); i += 2)
    {
        swap(A[i], A[i - 1]);
    }
    return A;
}

int main(){
    return 0;
}

