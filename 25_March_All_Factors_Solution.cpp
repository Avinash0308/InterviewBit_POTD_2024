#include<bits/stdc++.h>
using namespace std;

vector<int> allFactors(int A) {
    vector<int> ans1;
    vector<int> ans2;
    for(int i = 1; i*i <= A;i ++){
        if(A%i == 0){
            ans1.push_back(i);
            if(A/i != i) ans2.push_back(A/i);
        }
    }
    for(int i = ans2.size()-1; i>=0; i--) ans1.push_back(ans2[i]);
    return ans1;
}


int main(){
    return 0;
}