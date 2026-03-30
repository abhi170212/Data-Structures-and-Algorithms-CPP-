#include<bits/stdc++.h>
using namespace std;
int main(void){
     // check if a number is divisble by 5
     // check divibility for 2, .
     cout <<"Enter a number:- ";
     int num;
     string str;

     cin >> num;
     // cin.ignore();
     cout << "Enter string (divide by 5 / divide by 2):- ";
     getline(cin >> ws,str);

     if (str == "divide by 5") {
          if(num % 5 == 0 ){
               cout <<"Divisble by 5" ;
          }else{
               cout <<"Not divisible by 5";
          }
     }else if ( str == "divide by 2"){
          string ans = ((num & 1)==0)?"Divisible by 2" :"Not divisble by 2";
          cout << ans;
     }else{
          cout <<"Invalid input";
     }
     
     return 0;
}