#include<bits/stdc++.h>
using namespace std;
int main(void){
     // Take a number and print whether it is positive , negative or zero
     int n ;
     cout <<"Enter a number:  "; 
     cin >> n;
     if(n >0){
          cout <<"Positive";
     }
     else if ( n ==0){
          cout <<"Zero";
     }
     else{
          cout << "Negative";
     }
     return 0;
}