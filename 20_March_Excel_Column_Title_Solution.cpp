#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int A) {
    string ans;
    while(A>0){
        char c = int(((A-1)%26) + 65);
        if(A%26 == 0)A--;
        ans.push_back(c);
        A/=26;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}


int main(){
    return 0;
}