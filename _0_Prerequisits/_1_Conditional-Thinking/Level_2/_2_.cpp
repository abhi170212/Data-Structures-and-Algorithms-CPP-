#include<bits/stdc++.h>
using namespace std;
int main(void){
     // take marks and print the grdes ( A/B/C/D/F)

     int marks;
     cout << "Enter the marks:- ";
     cin >> marks;
     string grade;

     //--------------------------------------------------------
     
     if(marks<=100 && marks > 90) {
          grade="A";
          cout <<"Your grade is "<< grade;
     }else if(marks<=90 && marks > 80 ){
          grade="B";
          cout <<"Your grade is "<< grade;
     }else if(marks<=80 && marks > 70){
          grade="C";
          cout <<"Your grade is "<< grade;
     }else if(marks<=70 && marks > 60){
          grade="D";
          cout <<"Your grade is "<< grade;
     }else{
          grade="F";
          cout <<"Your grade is "<< grade;
     }

     //------------------------------------------------------------
     return 0;
}