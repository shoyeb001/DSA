//print name 5 times using recurtion

#include <iostream>
using namespace std; 

void name(int i, int n){
   if(i>n){
       return;
   }
   cout << "Shoyeb \n";
   name(i+1, n);
}

int main(){
    cout << "output is";
    name(1,5);
    return 0;
}
