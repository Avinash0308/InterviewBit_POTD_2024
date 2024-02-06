#include<bits/stdc++.h>
using namespace std;
int minCut(string A) {
    int n = A.size();
    vector<int> dp(n);
    vector<vector<int>> palin(n,vector<int>(n,0));
    for(int i = n-1; i>=0; i--){
        for(int j = i; j<n; j++){
            if(A[i] == A[j] && (i == j || i+1 == j ||palin[i+1][j-1])){
                palin[i][j] = 1;
            }
        }
    }
    for(int i = n-1; i>=0; i--){
        int ans = INT_MAX;
        for(int j = i; j<n; j++){
            if(palin[i][j]){
                int cur = (j == n-1)?0:dp[j+1]+1;
                ans = min(ans,cur);
            }
        }
        dp[i] = ans;
    }
    return dp[0];
}
