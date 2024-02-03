#include<bits/stdc++.h>
using namespace std;
int isValid(string A) {
     stack<char> s;
     for(auto c : A){
         if(c == '(' || c == '{' || c == '['){
             s.push(c);
         }
         else{--
             if(s.empty()) return 0;
             if(c == ')' && s.top() != '(' || c == '}' && s.top() != '{' || c == ']'  && s.top() != '[' ) return false;
             s.pop(); 
         }
     }
         return s.empty();
}
