#include<bits/stdc++.h>
using namespace std;
int Solution::climbStairs(int A) {
    int a = 1, b = 1;
    if(A == 1) return 1;
    for(int i = 2; i<=A; i++){
        int c = a+b;
        a = b;
        b = c;
    }
    return b;
}
                                                                                                                                                                                                                                