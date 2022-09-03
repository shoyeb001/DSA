//Largest sum contiguous subarray.

#include<iostream>
using namespace std;

int main(){
    vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
    int max = INT_MIN;
    int var = 0;
    
    for(int i=0;i<arr.size();i++){
        var = var+arr[i];
        if(var>max){
            max=var;
        }
        if(var<0){
            var = 0;
        }
    }
    cout<<max<<endl;
}
