#include<bits/stdc++.h>
using namespace std;
int main(void){
     // take temperature and print , hot , cold and warm on the condition 
     int cel,far;
     int temperature;


     cout <<"Enter Unit of temperature (celsius / farenheit )";
     string str; 
     
     getline(cin>>ws,str);

     if(str == "celsius") {
          cout << "Enter value:";
          cin >> cel;
          cout <<cel<<" is ";
          temperature=cel;
          
     }else if ( str == "farenheit"){
          cout << "Enter Value:";
          cin >> far;
          cout << far<<" is ";
          temperature=((far-32)*5)/9;
          
     }else{
          cout <<"Invalid String Entered";
     }
     
     

     //checking --------------------------------------------------
    if(temperature>40){cout <<"Hot";}
    else if(temperature >= 24 && temperature <= 40){cout <<"Warm";}
    else{cout <<"Cold";}
   


     return 0;
}