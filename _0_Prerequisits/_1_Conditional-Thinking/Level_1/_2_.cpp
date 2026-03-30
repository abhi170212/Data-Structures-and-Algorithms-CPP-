#include<bits/stdc++.h>
using namespace std;
int main(void){
     // check if a number is odd or even
     cout <<"Enter the number:- ";
     int n ;
     cin >> n ;
     if(n & 1 == 1) {
          cout << "Odd" ;
     }else{
          cout << "Even";
     }
     return 0;
}