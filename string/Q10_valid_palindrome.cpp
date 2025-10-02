#include<bits/stdc++.h>
using namespace std;

// leetcode 680 -> if by removing one character cn it be a palindrome ?

bool validPalindrome(string s){
     int i =0;
     int j = s.size() -1;
     bool isPalindrome(string st,int u , int h);
     while(i<=j){
          if(s[i] != s[j]) {
               // check if palindrom by removing the pointer one from both sides 
               return isPalindrome(s,i,j-1) || isPalindrome(s,i+1,j);
          }else{
               i++;
               j--;
          }
     }
     return true;
}

bool isPalindrome(string str,int a,int b){
  while(a <= b){
     if(str[a] != str[b]) return false;
    else{
      a++;
     b--;
    }
  }
  return true;
}


int main(void){
     // string checkPal = "loverl" ;
     string str;
     cout <<"Enter the string " << endl;
     getline(cin,str);
     if(validPalindrome(str)) {
          cout <<"Yes possible";
     }else{
          cout <<"Not Possible" << endl;
     }
     return 0;
}