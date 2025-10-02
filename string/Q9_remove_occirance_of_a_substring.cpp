#include<bits/stdc++.h>
using namespace std;
// leetcode 1910 
string removeOccurance(string str,string rmv){
     int pos = str.find(rmv) ;
     while(true){
          str.erase(pos,rmv.size());
          pos = str.find(rmv);

          if(pos == string::npos){
               break;
          }
     }
     return str;
}
int main(void){
     string one = "daabcbaabcbc";
     string two = "abc";
     string ans = removeOccurance(one,two);
     cout << ans;

     return 0;
}