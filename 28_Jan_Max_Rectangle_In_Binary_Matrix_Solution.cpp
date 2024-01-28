#include<bits/stdc++.h>
using namespace std;
int find_rec(vector<int> &v){
    int n = v.size();
    vector<int> left(n,0), right(n,n-1);
    stack<int> s;
    for(int i = 0; i<n; i++){
        while(!s.empty() && v[s.top()] > v[i]){
            right[s.top()] = i-1;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()) s.pop();
    for(int i = n-1; i>=0; i--){
        while(!s.empty() && v[s.top()] > v[i]){
            left[s.top()] = i+1;
            s.pop();
        }
        s.push(i);
    }
    int res = 0;
    for(int i = 0; i<n; i++){
        res = max(res,(right[i]-left[i]+1)*v[i]);
    }
    return res;
}
int maximalRectangle(vector<vector<int> > &A) {
    int n = A.size(), m = A[0].size();
    int ans = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(i != 0 && A[i][j] == 1) A[i][j] += A[i-1][j];
        }
        ans = max(ans,find_rec(A[i]));
    }
    return ans;
}
