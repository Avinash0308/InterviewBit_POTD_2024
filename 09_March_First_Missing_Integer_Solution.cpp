#include<bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int> &A) {
    int n = A.size();
    for(int i = 0; i<n; i++){
        while(A[i] >= 1 && A[i] <= n){
            if(A[i] == A[A[i]-1]) break;
            swap(A[i],A[A[i]-1]);
        }
    }
    for(int i = 0; i<n; i++){
        if(i+1 != A[i]) return i+1;
    }
    return n+1;
}
