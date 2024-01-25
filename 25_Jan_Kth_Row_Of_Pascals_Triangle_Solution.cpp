#include<bits/stdc++.h>
using namespace std;
vector<int> getRow(int A) {
    vector<int> last;
    last.push_back(1);

    if(A == 1) return {1,1};
    for(int i = 1; i<=A; i++){
        vector<int> cur;
        cur.push_back(1);
        for(int j = 1; j<last.size(); j++){
            cur.push_back(last[j] + last[j-1]);
        }
        cur.push_back(1);
        last = cur;
    }
    return last;
}
