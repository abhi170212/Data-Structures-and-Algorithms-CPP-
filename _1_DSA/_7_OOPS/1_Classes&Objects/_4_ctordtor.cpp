#include<bits/stdc++.h>
using namespace std;

class Ctor{
     public:
     int age;
     string name;

     //-------------------------------------------------------------------------
     Ctor(){
          cout <<"Default ctor is called" << endl;
     }
     Ctor(int age,string name){
          this->age=age;
          this->name=name;
          cout << "parametrised ctor is called" <<endl;
     }
     Ctor(Ctor &obj){
          this->age = obj.age;
          this->name =obj.name;
          cout <<"Copy constructor was called";
     }
     //----------------------------------------------------------------------------
     ~Ctor(){
          cout << endl<<"Destructor was called" << endl;
     }
};


int main(void){
     
     // static object bana do 
     Ctor ct;
     Ctor ct2(22,"Abhishek");
     Ctor ct3 = ct2;

     // dynamic object  ke sath ctor and dtor 
     Ctor* ctr = new Ctor;
     Ctor* ctr2 = new Ctor(22,"Abhi"); // 
     Ctor ctr3(*ctr2); // dynamic se static me copy -> stack me hai memory 
     Ctor ctr4(ct); // static se static me copy krna  -> stack me hai memory

     delete ctr;
     delete ctr2;
     

     return 0;
}

