#include<bits/stdc++.h>
using namespace std;
int uniquePathsWithObstacles(vector<vector<int> > &A) {
    int n = A.size(), m = A[0].size();
    vector<vector<int>> dp(n,vector<int> (m,0));
    if(A[0][0]) return 0;
    if(A[n-1][m-1]) return 0;
    dp[0][0] = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(i>0 && A[i-1][j] != 1){
                dp[i][j] += dp[i-1][j];
            }
            if(j>0 && A[i][j-1] != 1){
                dp[i][j] += dp[i][j-1];
            }
        }
    }
    return dp[n-1][m-1];
}
