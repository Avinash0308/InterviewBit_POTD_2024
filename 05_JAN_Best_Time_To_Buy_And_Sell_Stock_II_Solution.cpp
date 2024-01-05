#include<bits/stdc++.h>
using namespace std;
int maxProfit(const vector<int> &prices) {
    int j=prices.size()-1, i=j-1, res=0;
        while(i>=0){
            if(prices[j]-prices[i]>0) {
                res += prices[j]-prices[i];
                j--;
            }
            else j=i;
            i--;
        }
        return res;
}
