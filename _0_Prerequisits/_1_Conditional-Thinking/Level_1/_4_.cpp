#include<bits/stdc++.h>
using namespace std; 
int main(void)
{
     // check if a year is leap year or not 
     int n ; 
     cout << "Enter a year:- ";
     cin >> n;
     bool isLeap = ((n%4==0) && (n%100 !=0)) ||(n%400==0);
     if(isLeap){
          cout <<"Leap Year"<<endl;
     }else{
          cout <<"Not Leap year";
     }
     return 0;
}