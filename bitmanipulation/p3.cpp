#include<iostream>
using namespace std;

//print xor of 1 to n number

int main(){
    int n;
    cin >> n;
    if(n%4==0){
        cout<<n;
    }
    else if(n%4==1){
        cout<<1;
    }
    else if(n%4==2){
        cout<<n+1;
    }
    else if(n%4==3){
        cout << 0;
    }
    
    return 0;

}
