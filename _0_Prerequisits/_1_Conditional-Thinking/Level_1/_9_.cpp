#include<bits/stdc++.h>
using namespace std;
int main(void)
{    
     // check wheather it is uppercase,lowercase, a digit , or a special character

     char ch;
     cin >> ch;

if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an Uppercase letter." << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a Lowercase letter." << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a Digit." << endl;
    }
    else {
        cout << ch << " is a Special Character." << endl;
    } 
     return 0;
}