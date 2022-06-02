//print 1 to n with backtracking

#include <iostream>
using namespace std;

void print(int i, int n){
    if (i<1)
    {
        return;
    }
    print(i-1, n);
    cout << "\n" << i;
}

int main(){
    int n;
    cout << "Enter n \n";
    cin >> n;
    print(n,n);
    return 0;
}
