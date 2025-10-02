#include <iostream>
using namespace std;

// Function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void fibo(int n){
     int a=0,b=1;
     cout <<"fibonacci sequence is " << a<< "and " <<b ;
     for(int i =2;i< n;++i){
          int c = a+b;
          cout << c<< " " ;
          a=b;
          b=c;

     }
     }
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    cout << "Fibonacci sequence: ";
    for (int i = 1; i <= n; ++i) { 
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
