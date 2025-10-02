#include<iostream>
using namespace std;

int factorial(int number){
     if(number == 1 || number == 0){
          return 1;
     }

     int ans = number * factorial(number-1);
     return ans;
}
int main(void){
     cout<<"Enter a number" <<endl;
     int number;
     cin >> number;
     cout <<"number you entered is " <<number<<endl;

     int ans = factorial(number);
     cout <<"The factorial is" << ans;
     // cout << ans;

     return 0;
}