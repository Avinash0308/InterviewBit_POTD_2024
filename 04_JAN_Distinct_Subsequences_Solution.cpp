#include<bits/stdc++.h>
using namespace std;
int solve(int a, int b, int n, int m, string &A, string &B, vector<unordered_map<int,int>> &v){
    if(b == m) return 1;
    if(a == n) return 0;
    if(v[a].count(b)!=0) return v[a][b];
    if(A[a] != B[b]){
        v[a][b] = solve(a+1,b,n,m,A,B,v);
    }
    else{
        v[a][b] = solve(a+1,b,n,m,A,B,v) + solve(a+1,b+1,n,m,A,B,v);
    }
    return v[a][b];
}
int numDistinct(string A, string B) {
    if(B.size() > A.size()) return 0;
    if(A.size() == B.size() && A != B) return 0;
    if(A.size() == B.size()) return 1;
    vector<unordered_map<int,int>> v(A.size());
    return solve(0,0,A.size(),B.size(),A,B,v);
}
