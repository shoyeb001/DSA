//Euclid's algo

#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int main(){
    int a=10;
    int b = 35;
    cout << gcd(a,b)<<endl;
    return 0;
}
