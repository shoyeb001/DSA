// check a array is palindrome or not
#include <iostream>
using namespace std;

int fun(int i, int arr[], int n){
    if (i>= n/2)
    {
        return 1;
    }
    if (arr[i]!=arr[n-i-1])
    {
       return 0;
    }
    return fun(i+1, arr, n);
}

int main(){
    int n, arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (fun(0,arr,n) == 1)
    {
        cout << "array is palindrome";
    }
    else{
        cout << "array is not palindrome";
    }
    return 0;

    
}
