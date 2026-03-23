#include<bits/stdc++.h>
using namespace std;

class Person{
private:
    float weight;
    int height;
    string PhoneNumber;

public:
    string name;

    // setter (multiple values set ho rahe hain)
    void fxnToSetPrivateDetails(float w, int h, string PhNo){
        weight = w;
        this->height = h;
        this->PhoneNumber = PhNo;
    }

    // getters
    string PhoneNumberFxn(){
        return PhoneNumber;
    }

    float weightreturnFxn(){
        return this->weight;
    }

    int heightreturnFxn(){
        return this->height;
    }
};

int main(){

    Person ps1;

    ps1.fxnToSetPrivateDetails(79.90, 174, "9876543210");


    return 0;
}