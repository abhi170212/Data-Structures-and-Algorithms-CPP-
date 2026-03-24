#include<bits/stdc++.h>
using namespace std; 

//Base class --------------------------------------------------------------------------------
class First{
     public:
     int code;
     int marks;
};
class MathematicsMarks:public First{

};

//-----------------------------------------------------------------------------------------
// Diamond Problem 
class code{
     public :
     string name;
}; 
class SecondCode{
     public:
     string name;
};
class ThirdCode:public code,public SecondCode{
};
//---------------------------------------------------------------------------------------------------


int main(void){
     MathematicsMarks* mt = new MathematicsMarks;
     mt->code=233;
     cout << mt->code<<endl;

     // inheritance ambiguity error 
     ThirdCode cd;
     cd.SecondCode::name="Abhishek";
     cout << cd.code::name; // this will not give u an output 
     cout << cd.SecondCode::name<<endl;
     return 0;
}