// print linearly 1 to n

#include <iostream>
using namespace std;

void printit(int i, int n){
    if (i>n)
    {
        return;
    }
    cout << "\n" << i;
    printit(i+1, n);
    
}

int main(){
    int n;
    cout << "Enter n \n";
    cin >> n;
    printit(1,n);
    return 0;
    
}
