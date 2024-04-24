#include <bits/stdc++.h>
using namespace std;
int singleNumber(const vector<int> &A) {
    int ans = 0;
    for(auto i:A){
        ans ^= i;
    }
    return ans;
}

int main()
{
    return 0;
}