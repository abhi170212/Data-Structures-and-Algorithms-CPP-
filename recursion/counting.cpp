#include<iostream>
using namespace std;

void counting(int a){
     if(a ==0 ) return ;

      counting(a-1);
     cout << a <<" " ;
}
int main(void){
     int n;
     cout <<"Enter a number" << endl;
     cin >> n;

     counting(n);
     return 0;
}