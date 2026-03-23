#include<bits/stdc++.h>
using namespace std;

// dyanmic objects ( uses Heap Memory) ------------------------------------------------
class fruitClass{
public: 
          string name;
private:
          string family;
          int code;

public:
          //setters and getters -----------------------------------------------------
          void setFxn(string family,int code){
               this->code = code;
               this->family = family;
          }

          string fxnForFamilyName(){return this->family;}
          int fxnForCode(){return this->code;}
};

int main(void){
     // this time dynamic object ------------------------------------------------------
     fruitClass* ft = new fruitClass;
     ft->setFxn("bana-9",332);

     (*ft).name="banana";
     cout << ft->fxnForFamilyName()<<endl;
     cout << ft->fxnForCode()<<endl;
     cout << ft->name;

     return 0;
}