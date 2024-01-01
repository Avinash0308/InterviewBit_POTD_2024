#include<bits/stdc++.h>
using namespace std;
int majorityElement(const vector<int> &A) {
    unordered_map<int,int> m;
    for(auto i:A){
        m[i]++;
    }
    int n = A.size();
    for(auto i:m){
        if(i.second > n/2) return i.first;
    }
    return -1;
}
