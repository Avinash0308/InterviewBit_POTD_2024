#include<bits/stdc++.h>
using namespace std;
int jump(vector<int> &A) {
    int jumps = 0;
    int i = 0; 
    int n = A.size();
    while(i<n-1){
        if(A[i] == 0) return -1;
        int val = i + A[i];
        jumps++;
        if(val >= n-1) return jumps;
        int maxy = 0, ind = 0;
        i++;
        while(i <= val){
            if(A[i] + i >= maxy){
                maxy = A[i] + i;
                ind = i;
            }
            i++;
        }
        i = ind;
    }
    return jumps;
}
