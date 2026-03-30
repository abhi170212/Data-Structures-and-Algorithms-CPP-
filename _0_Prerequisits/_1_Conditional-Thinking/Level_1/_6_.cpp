#include<bits/stdc++.h>
using namespace std;
int main(void){
     // take three numbers and print the largest
     int n,m,p;
     cin >> n>>m>>p;
     int lar = (n>m) ? ((n>p)? n:p):(m>p ? m:p );
     cout << lar;
     return 0;
}