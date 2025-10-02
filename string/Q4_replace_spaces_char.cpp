#include <bits/stdc++.h>
using namespace std;
int len(char st[]){
     int i =0;
     int c=0;
     while(st[i] != '\0'){
          c++;
          i++;
     }
     return c;
}
void replaceSpaces(char arr[]){
     int length = len(arr);
     for(int i =0;i<length;i++){
          if(arr[i] == ' '){
               arr[i] = '@';
          }
     }
     cout << arr;
}
void removeSpace(char s[]){
     int l = len(s); // length ho gya 
     int j =0;
     for(int i =0;i<l;i++){
          if(s[i] != ' '){
               s[j] = s[i];
               j++;
               
          }
     }      
     s[j] = '\0';
     cout << s;
}
int main(void){
     char arr[] = {'a','b',' ','i','s','h','e','k','\0'} ;
     // replaceSpaces(arr);
     cout <<"After removing spaces " << endl;
     removeSpace(arr);
     return 0;
}