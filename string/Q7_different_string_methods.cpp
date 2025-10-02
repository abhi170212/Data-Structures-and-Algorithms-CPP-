#include<bits/stdc++.h>
using namespace std;
int main(void){
     string s = "abhishek";

     cout <<"Length of the string" << endl;
     cout << s.length() << endl;
     cout << s.size() << endl;

     cout <<"find function " << s.find('a') << endl;
     cout << "substring wala method"<<s.substr(2,4) << endl;
     cout << "erase wlaa" << s.erase(1,3) << endl;
     cout << "first " << *s.begin() << endl;
     cout << "first " << s.front()<< endl;
     cout << "last char " << s.back() << endl;
     cout << "last char " << *s.end() << endl; // empty ayega ye wala 
     // find bhi hai , s.find(target) ->> string::npose (if not found anything ) ; 
     s.insert (2," hey i got inserted inside ") ;
     transform(s.begin(),s.end(),s.begin(),::tolower);
      cout << s;

     return 0;
}