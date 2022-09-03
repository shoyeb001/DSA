//swap 2 integers.

#include<iostream>
using namespace std;

int main(){
   int a = 5;
    int b = 7;
    
    a = a^b;
    b= a^b;
    a=b^a;
    
    cout<< a << endl;
    cout << b<<endl;
}
