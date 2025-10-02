#include<bits/stdc++.h>
using namespace std;

// leetcode 1047 question number 
// input ->> abbaca , output ->> ca
string removeDuplicates(string s){
     string ans="";
     int i =0;
     while(i<s.size()){
          if(ans.length() > 0) {
               // do something as answer is already there
               if(s[i] == ans.back()){
                    // remove krna hai isme
                    ans.pop_back();
                    
               } else{
                    // answer me aur string samne nahi hai dono 
                    ans.push_back(s[i]);
               }
          }else{
               // insert new element inside the answer 
               ans = ans + s[i] ;
          }
          i++;
     }
     return ans;
}

int main(void){
     string qs = "azxxzy";
     string ans= removeDuplicates(qs);
     cout<<"ans is" << endl;
     cout << ans;
     return 0;
}