#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A) {
    int n = A.size();
    vector<int> ans(n);
    int x = -1;
    while(x+1<n && A[x+1] < 0) x++;
    int y = x+1;
    int i = 0;
    while(x >= 0 && y<n){
        if(A[y] <= abs(A[x])){
            ans[i] = A[y]*A[y];
            y++;
        }
        else{
            ans[i] = A[x]*A[x];
            x--;
        }
        i++;
    }
    while(x>=0){
        ans[i] = A[x]*A[x];
        x--;
        i++;
    }
    while(y<n){
        ans[i] = A[y]*A[y];
        y++;
        i++;
    }
    return ans;
}




int main(){
    return 0;
}