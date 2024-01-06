#include<bits/stdc++.h>
using namespace std;
int maxProfit(const vector<int> &A) {
    int n = A.size();
    int ans = 0,  cur = INT_MAX;
    for(int i = 0; i<n; i++){
        if(cur > A[i]) cur = A[i];
        else{
            ans = max(ans,A[i]-cur);
        }
    }
    return ans;
}
