#include<bits/stdc++.h>
using namespace std;
int maxSubArray(const vector<int> &A) {
    int ans = INT_MIN, cur = 0;
    for(auto i:A){
        cur += i;
        ans = max(ans,cur);
        if(cur <= 0) cur = 0;
    }
    return ans;
}
