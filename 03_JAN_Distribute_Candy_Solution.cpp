#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>

int candy(vector<int> &A) {
    int n = A.size();
    vector<int> can(n,1);
    for(int i = 1; i<n; i++){
        if(A[i] > A[i-1]){
            can[i]  = can[i-1]+1;
        }
    }
    for(int i = n-2; i>=0; i--){
        if(A[i] > A[i+1] && can[i] <= can[i+1]){
            can[i] = can[i+1] + 1;
        }
    }
    return accumulate(can.begin(),can.end(),0);
}
