#include<bits/stdc++.h>
using namespace std;

string findDigitsInBinary(int A) {
    if(A == 0) return "0";
    string ans;
    while(A){
        if(A%2) ans.push_back('1');
        else ans.push_back('0');
        A/=2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}


int main(){
    return 0;
}