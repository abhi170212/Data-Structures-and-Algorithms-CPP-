#include<bits/stdc++.h>
using namespace std;

// this is how classes are created -----------------------------------------------
class Subject{

     public:
     int code;
     string name;
     string teacherName;

     void subjectDetails(){
          cout << "subject is " << this->name << endl;
          cout << "subject code is  " << (*this).code << endl;
          cout << "subject teacher  is " << this->teacherName << endl;
     }
};

int main(void){

     //--------------------------------------------------------------------------------
     // there are two ways to create a class ( this is static way , uses stack memory)
     Subject mathematics;
     mathematics.code = 424;
     mathematics.name="mathematics";
     mathematics.teacherName="Anand Tripathi";
     
     //-----------------------------------------------------------------------------------
     mathematics.subjectDetails();
     //------------------------------------------------------------------------------------

     return 0;
}