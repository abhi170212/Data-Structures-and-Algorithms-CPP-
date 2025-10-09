#include<bits/stdc++.h>
using namespace std;
// function overloading 
class Subjects {
     private:
     int duration;
     string course_name;

     public:
     // duration ka call
     void setDuration(int duration){
          this->duration = duration ;
     }
     int getDuration(){return duration;};

     // course_name ka call 
     void getCourse_name(string name){
          (*this).course_name = name;
     }
     string nameOfCourse(){
          return course_name;
     }






     int durationCalculator(int course_length,int course_time_take,int course_revision) {
          if(course_length  <= 0){ 
               cout << "invalid course" ; 
               return 0 ;
          }
          int totalTime = course_length * course_time_take + course_revision ;
          return totalTime;
     }
     // operator overloading me objects ko print wala karo 
   
};

int main(void){

     return 0;
}