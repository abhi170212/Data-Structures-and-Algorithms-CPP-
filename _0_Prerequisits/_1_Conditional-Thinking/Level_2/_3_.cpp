#include<bits/stdc++.h>
using namespace std;


int main(void){
     //check if two numbers are multiple of each other;
     int  n,m;
    cout << "İki sayı girin: ";
     cin >> n>> m ;
     if(n%m==0 || m%n==0){
          cout << "Evet";
     }else{
          cout <<"Hayir";
     }

     return 0;
}