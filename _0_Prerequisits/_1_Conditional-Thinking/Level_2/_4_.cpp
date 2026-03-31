#include<bits/stdc++.h>
using namespace std;

int main(){
     int hour;
     cout << "24 saat formatında zamanı girin: ";
     cin >> hour;

     //-----------------------------------------------------------
     if(hour >= 0 && hour < 5){
          cout << "İyi geceler";
     }
     else if(hour >= 5 && hour < 12){
          cout << "Günaydın";
     }
     else if(hour >= 12 && hour < 17){
          cout << "İyi öğleden sonra";
     }
     else if(hour >= 17 && hour < 21){
          cout << "İyi akşamlar";
     }
     else if(hour >= 21 && hour < 24){
          cout << "İyi geceler";
     }
     else{
          cout << "Geçersiz saat!";
     }
     //---------------------------------------------------------------
     return 0;
}