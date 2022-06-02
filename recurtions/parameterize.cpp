//print sum of n numbers
#include <iostream>
using namespace std;

void add(int i, int sum){
    if (i<1)
    {
        cout << sum;
        return;
    }
    add(i-1, sum + i);
} 

int main(){
    int n;
    cout << "Enter n \n";
    cin >> n;
    add(n,0);
    return 0;
}
