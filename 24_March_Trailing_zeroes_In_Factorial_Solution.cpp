#include<bits/stdc++.h>
using namespace std;

int trailingZeroes(int A) {
    long long int val = 5;
    int ans = 0;
    while(val <= A){
        ans += (A/val);
        val *= 5;
    }
    return ans;
}


int main(){
    return 0;
}