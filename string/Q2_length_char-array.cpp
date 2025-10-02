#include <bits/stdc++.h>
using namespace std;
int getLegth(char name[]){
     int len = 0;
     int i =0;
     while(name[i] != '\0'){
          len++;
          i++;
     }
     return len;
}

int main(void){
     char arr[] ={'a','b','h','i','s','h','e','k','\0'};
     int len = getLegth(arr);
     cout <<"Length is " << len;
     return 0;
}