#include<bits/stdc++.h>
using namespace std;

int titleToNumber(string A) {
    int n=A.size();
    int ans=0;
    for(int i=0; i<n; i++)
    {
        ans=ans*26+(A[i]-'A'+1);
    }
    return ans;
   
}

int main(){
    return 0;
}