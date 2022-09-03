//find the single iterated array element

#include<iostream>
using namespace std;

int main(){
    vector<int> arr={2,1,2,5,6,5,7,7,6};
    int n = arr.size();
    int x = 0;
    
    for(int i=0;i<n;i++){
        x = x^arr[i];
    }
    cout<<x<<endl;
    return 0;
}
