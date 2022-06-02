//print n to 1 using backtracking

#include <iostream>
using namespace std;

void reverse(int i, int n){
    if (i>n)
    {
        return;
    }
    reverse(i+1, n);
    cout << "\n" << i;
}

int main(){
    int n;
    cout << "Enter n \n";
    cin >> n;
    reverse(1,n);
    return 0;
}
