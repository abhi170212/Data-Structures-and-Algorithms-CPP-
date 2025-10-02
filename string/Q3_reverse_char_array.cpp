#include <bits/stdc++.h>
using namespace std;
// function to find length 
int len(char s[]){
     int i =0;
     int count =0;
     while (s[i] != '\0'){
          count ++;
          i++;
     }
     return count;
}
// reverse a string function
void revserse(char st[]){
     int i =0;
     int j = len(st) -1;
     while(i<=j){
          swap(st[i],st[j]);
          i++;
          j--;
     }
     cout << st;
} 

int main(void){
     char arr[] = {'a','v','b','f','\0'};
     revserse(arr);
     return 0;
}