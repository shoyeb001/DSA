// print n to 1 using recursion

#include <iostream>
using namespace std;

void reverse(int i, int n){
    if (i>n)
    {
        return;
    }
    cout << "\n" << n;
    reverse(i, n-1);
}

int main(){
    int n;
    cout << "enter value of n";
    cin >> n;
    reverse(1, n);
    return 0;
}
