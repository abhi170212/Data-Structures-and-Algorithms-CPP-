#include<bits/stdc++.h>
using namespace std;

// leetcode 647  ->> number of palindromic substring 
int subStringCount ( string s){
     int cnt = 0;
     for( int i =0;i<s.size();i++){
          for( int j=i;j<s.size();j++){
               string str = s.substr(i,j-i+1);
               if(str != " ") {
                    cnt ++;
               }
          }
     }
     return cnt;

}


int expandAroundIndex(string str,int i ,int j){
     // i jo hai wo start ke baad nhi jana chahiye 
     // j jo hai wo end ke baad nahi jana chahiye 
     // str[i] == str[j]  hone chahiye 

     // substr kr liye , i ko left side me decrease 
     // substr ke liye j ko right side me increase krna hoga 

     int ctn =0;
     while(i>=0 and j<=str.size()-1  and str[i] == str[j]){
          ctn++;
          i--;
          j++;
     }
     return ctn;
}

int countPalindromicSubstring(string s){
     int count =0;
     for(int i =0;i<s.size();i++){
          // odd wale sab substrings
          int oddKaAns = expandAroundIndex(s,i,i);
           
          // even wala ans 
          int evenKaAns = expandAroundIndex(s,i,i+1);
          count = count+ evenKaAns + oddKaAns ;
     }

     return count;

}
int main(void){
     string str="noon";
     // int ans = subStringCount(str);
     int ans = countPalindromicSubstring(str);
     cout << ans;
     return 0;
}