#include<bits/stdc++.h>
using namespace std;
int mGap(const vector<int> &A) {
    int n = A.size();
    vector<pair<int,int>> v(n);
    for(int i = 0; i<n; i++){
        v[i] = {A[i],i};
    }
    sort(v.begin(),v.end());
    int mn = n-1;
    int ans = 0;
    for(int i = 0; i<n; i++){
        mn = min(mn,v[i].second);
        ans = max(ans,v[i].second - mn);
    }
    return ans;
}

int main(){
    
return 0;
}