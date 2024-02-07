#include<bits/stdc++.h>
using namespace std;
int minPathSum(vector<vector<int> > &A) {
    int n = A.size(), m = A[0].size();
    vector<int> prev(m);
    vector<int> curr(m);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            int miny = INT_MAX;
            if(i == 0 && j == 0) miny = 0;
            else if(i == 0) miny = curr[j-1];
            else if(j == 0) miny = prev[j];
            else miny = min(curr[j-1],prev[j]);
            curr[j] = miny + A[i][j];
        }
        prev = curr;
    }
    return prev[m-1];
}
