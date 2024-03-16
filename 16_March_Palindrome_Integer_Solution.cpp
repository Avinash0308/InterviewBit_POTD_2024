#include<bits/stdc++.h>
using namespace std;

int isPalindrome(int A) {
    if(A<0) return 0;
    int val = A;
    int res = 0;
    while(val){
        res = res*10 + val%10;
        val/=10;
    }
    return res == A;
}


int main(){
    return 0;
}