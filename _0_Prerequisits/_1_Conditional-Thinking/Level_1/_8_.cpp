#include<bits/stdc++.h>
using namespace std;

bool AlphabetChecker(char c){
     c=tolower(c);
     if(c == 'a' || c=='e' || c == 'i' || c == 'o' || c == 'u'){
          return true;
     }
     return false;
}
int main(void)
{    
     //take a character and print , vowel or consonent
     char ch;
     cout <<"Enter an alphabet:- "<<endl;
     // cin.ignore();
     cin >> ch;
     if(AlphabetChecker(ch)){cout << "Vowel";}
     else{cout <<"Consonent";}

     return 0;
}