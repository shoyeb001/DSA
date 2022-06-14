#include <iostream>
using namespace std;

void setit(int n, int s, int h, int d){
    if (n==1)
    {
        cout << "moving" << n << "from" << s << "to" << d << endl;
        return;
    }
    setit(n-1,s,d,h);
    cout << "moving"<< n << "from" << s << "to" << d <<endl;
    setit(n-1,h,s,d);
    
}

int main(){
    int s= 1;
    int h = 2;
    int d = 3;
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    setit(n,s,h,d);
}
