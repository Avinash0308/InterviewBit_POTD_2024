#include<bits/stdc++.h>
using namespace std;
int maximumGap(const vector<int> &A) {
    if(A.size() < 2) return 0;
    int n = A.size();
    int miny = *min_element(A.begin(),A.end());
    int maxy = *max_element(A.begin(),A.end());
    
    int bucket_range = max(1,(maxy-miny)/(n-1));
    int bucket_count = ((maxy-miny)/bucket_range)+1;
    
    vector<pair<int,int>> buckets(bucket_count,make_pair(INT_MAX,INT_MIN));
    for(int num:A){
        int index = (num-miny)/bucket_range;
        buckets[index].first = min(buckets[index].first,num);
        buckets[index].second = max(buckets[index].second,num);
    }
    
    int max_gap = 0;
    int prev_max = miny;
    
    for(const auto&bucket : buckets){
        if(bucket.first == INT_MAX) continue;
        max_gap = max(max_gap,bucket.first - prev_max);
        prev_max = bucket.second;
    }
    return max_gap;
}

int main(){
    
return 0;
}