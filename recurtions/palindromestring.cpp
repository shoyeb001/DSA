//check a srting is palindrome or not
#include <iostream>
using namespace std;

int check(int i, string &s){
    if (i>=s.size()/2)
    {
        return 1;
    }
    if (s[i] != s[s.size()-i-1])
    {
        return 0;
    }
    return check(i-1,s);
    
    
}

int main(){
    string n;
    cin >> n;
    if (check(0,n))
    {
        cout << "string is palindrome";
    }else{
        cout << "string is not palindrome";
    }
    return 0;
}
