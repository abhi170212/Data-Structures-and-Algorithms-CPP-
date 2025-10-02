#include <bits/stdc++.h>
using namespace std;

// function for the conversion 
char convert (char c){
     // check it first 
     if(c >= 'a' and c <= 'z') {
          // convert to capital letter 
          c = c - 32 ; 
     }
     else if ( c >= 'A' && c <= 'Z' ){
          c = c + 32; 
     }
}
int main(void){
     char letters[] = { 'a','C','d','E','W','Q'};
     for(int i =0;i<=5;i++){
          char ct = convert(letters[i]);
          cout << ct <<endl;
     }
     return 0;
}