//print sum of n numbers

#include <iostream>
using namespace std;

int add(int n){
    if (n == 0)
    {
        return 0;
    }
    return n + add(n-1);
}

int main(){
    int sum, n;
    cout << "enter n \n";
    cin >> n;
    sum = add(n);
    cout << sum;
    return 0;

}
