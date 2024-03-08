string stringify(int val){
    stringstream num;
    num << val;
    string n;
    num >> n;
    return n;
}
bool comp(string a, string b){
     return (a+b) > (b+a);
}
string Solution::largestNumber(const vector<int> &A) {
    int n = A.size();
    vector<string> num(n);
    for(int i = 0; i<n; i++){
        num[i] = stringify(A[i]);
    }
    sort(num.begin(),num.end(),comp);
    if(num[0] == "0") return num[0];
    string ans = "";
    for(auto str:num){
        ans += str;
    }
    return ans;
}
