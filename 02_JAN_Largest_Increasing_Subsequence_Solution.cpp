#include<bits/stdc++.h>
using namespace std;
int lis(const vector<int> &A) {
    int n = A.size();
    int sol = 0;
    vector<int> v(n);
    for(int i = n-1; i>=0; i--){
        int ans = 0;
        for(int j = i+1; j<n; j++){
            if(A[i] < A[j]){
                ans = max(ans,v[j]);
            }
        }
        v[i] = ans + 1;
        sol = max(sol,v[i]);
    }
    return sol;
}
