#include <iostream>
using namespace std;

class Student {
private:
    int age;   // hidden data
    string name;

public:
    // Setter (data set karne ke liye)
    void setData(int a, string n) {
        age = a;
        name = n;
    }

    // Getter (data access karne ke liye)
    void getData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s;

    
    // s.age = 20; 

    
    s.setData(20, "Abhishek");
    s.getData();

    return 0;
}