#include<bits/stdc++.h>
using namespace std;
int evalRPN(vector<string> &A) {
    stack<int> s;
    for(auto i:A){
        if(i == "*" || i == "/" || i == "+" || i == "-"){
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();
            if(i == "*") s.push(a*b);
            if(i == "/") s.push(b/a);
            if(i == "+") s.push(b+a);
            if(i == "-") s.push(b-a);
        }
        else{
            int val = stoi(i);
            s.push(val);
        }
    }
    return s.top();
}
