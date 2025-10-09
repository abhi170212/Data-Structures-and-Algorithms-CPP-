#include<bits/stdc++.h>
using namespace std;

class Course{
      private:
     string teacher;

     public:
     string name;
     int duration;
     int price;

     string getTeacher(){
          return teacher;
     }

     void setTeacher(string teacher){
          (*this).teacher = teacher; // this-> teacher = teacher;
     }

    Course(){
          this-> name = "";
          this-> duration = 0;
          this-> price = 0;
          cout <<"default Constructor  " << endl;
    }
    Course(string name,int duration, int price) {
     this -> name = name ;
     this -> duration = duration;
     this -> price = price;

     cout << "parametrized constructor was called" << endl;
    }
    ~Course(){
          this-> name = "";
          this-> duration = 0;
          this-> price = 0;
          cout << "Programme has ended " << endl;
    }

};
int main(void){
     // static object 
     Course webDev;
     webDev.name = "web Development" ;
     webDev.duration = 200;
     webDev.price = 5000;
     webDev.setTeacher("Abhishek Singh");
     cout << webDev.getTeacher() << endl;

     // object __2 
     Course dsa("Data Structures and Algorithms",200,6000);
     cout << "Price is " << dsa.price << endl;
     cout << "Name is " << dsa.name << endl;
     cout <<"Duration is " << dsa.duration << endl;
     dsa.setTeacher("Abhi") ;
     cout <<"The teacher is " << dsa.getTeacher() << endl;
     // cout << dsa;


     // dynamic objects
     Course *django = new Course;
     django -> name = "Django" ;
     django -> duration = 60;
     (*django).price = 3500;
     (*django).setTeacher("Abhishek") ;
     cout << (*django).getTeacher() << endl;
     // cout << (*django) << endl;

     // memeory dealllocation
     delete django; 
     // jab dynamically object banta hai to usse khtm krne ke liye delete krne ke baad destructor call hota hai 



  
     return 0;
}