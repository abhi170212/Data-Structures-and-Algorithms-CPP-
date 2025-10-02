#include <bits/stdc++.h>
using namespace std;
//length wala 
int len(char st[]){
     int i =0;
     int count =0;
     while(st[i] != '\0'){
          count ++;
          i++;
     }
     return count;
}
//palindrome function 
bool isPalindrome(char str[]){
     int i =0;
     int j = len(str) -1;
     while(i<=j){
          if(str[i] != str[j]) {
               return false;
          }
          else{
               i++;
               j--;
          }
     }
     return true;
}
int main(void){
     char arr[] ={'m','a','t','a','y','a','l','a','m'};
     bool ans =isPalindrome(arr);
     if (ans){cout <<"is Palindrome hai ";}
     else{ cout << "not palindrome";}
     return 0;
}