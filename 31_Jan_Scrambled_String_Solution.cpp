 #include<bits/stdc++.h>
 using namespace std;
 bool solve(string s1, string s2,unordered_map<string,bool> &mp)
    {
        if(s1.compare(s2)==0) return true;
       
        string key=s1;
        key.push_back(' ');
        key.append(s2);
        if(mp.find(key)!=mp.end()) return mp[key];
        
        
        int n= s1.size();
        bool ans=false;
        for(int i=1;i<n;i++){
             
        bool swapped=solve(s1.substr(i,n-i),s2.substr(0,n-i),mp) 
                              && solve(s1.substr(0,i),s2.substr(n-i,i), mp  );
        
        bool notswapped=solve(s1.substr(0,i),s2.substr(0,i),mp) 
                                && solve(s1.substr(i,n-i),s2.substr(i,n-i), mp  );
        
        if(swapped || notswapped){   
            ans= true;
            break;
        }
    }
    return mp[key]=ans;
    }
int isScramble(const string a, const string b) {
    if(a.size()!=b.size()) return false;
        if(a.empty() && b.empty()) return true;
        unordered_map<string,bool> mp;
        
        return solve(a,b,mp);
}