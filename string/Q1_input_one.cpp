#include <bits/stdc++.h>
using namespace std;


int main(void){
     char input1[50];
     char input2[50];
     char input3[50];

     cin.getline(input1,30,',');
     cin.ignore(); // iska use hai ki buffer ko clean kr de cin ka <<------ kaafi important hai ye wla.
     cin.getline(input2,30,' ') ;



      cout <<"Comma delimter " <<endl;
     cout << input1 <<endl;

     cout << "Space delimeter" << endl;
     cout << input2 <<endl;
     return 0;
}