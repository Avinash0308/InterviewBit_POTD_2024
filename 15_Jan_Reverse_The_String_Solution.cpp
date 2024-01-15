#include<bits/stdc++.h>
using namespace std;
string solve(string A) {
    string ans;
    int n = A.size();
    for(int i = 0; i<n; i++){
        if(A[i] != ' '){
            string cur;
            while(i<n && A[i] != ' '){
                cur.push_back(A[i]);
                i++;
            }
            ans = cur + " " + ans;
        }
    }
    ans.pop_back();
    return ans;
}
