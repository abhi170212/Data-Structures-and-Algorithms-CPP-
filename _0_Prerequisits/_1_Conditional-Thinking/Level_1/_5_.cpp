#include<bits/stdc++.h>
using namespace std;
int main(void){
     // take two numbers and print the largest
     int n,m;
     cin >> n >> m;
     int large = (n>m) ? n:m;
     cout << large;
     return 0;
}