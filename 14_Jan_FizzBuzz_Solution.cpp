#include<bits/stdc++.h>
using namespace std;
vector<string> fizzBuzz(int A) {
    vector<string> ans;
    for(int i = 1; i<=A; i++){
        if(i%3 == 0 && i%5 == 0) ans.push_back("FizzBuzz");
        else if(i%3 == 0) ans.push_back("Fizz");
        else if(i%5 == 0) ans.push_back("Buzz");
        else{
            string ans2 = to_string(i);
            ans.push_back(ans2);
        }
    }
    return ans;
}
