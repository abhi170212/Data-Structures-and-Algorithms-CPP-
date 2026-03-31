#include<bits/stdc++.h>
using namespace std;

int main(){
     int side1, side2, side3;
     cout << "Enter the sides:- ";
     cin >> side1 >> side2 >> side3;

     bool isTriangle = false;

     if(side1 + side2 > side3 &&
        side2 + side3 > side1 &&
        side1 + side3 > side2) {
          isTriangle = true;
     }

     if(isTriangle){
          cout << "----Triangle is possible----\n";

          if(side1 == side2 && side2 == side3) {
               cout << "Equilateral Triangle";
          }
          else if(side1 == side2 || side2 == side3 || side1 == side3){
               cout << "Isosceles Triangle";
          }
          else{
               cout << "Scalene Triangle";
          }

     } else {
          cout << "----Not possible to form a Triangle----";
     }

     return 0;
}