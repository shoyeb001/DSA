#include<iostream>
#include<vector>
using namespace std;
int peak(vector<int> arr){
   int size = arr.size();
    int start = 0;
    int end = size-1;
    while(start<=end){
       int mid = start + (end-start)/2;
        if(mid>0 && mid<size-1){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return arr[mid];
            }
            else if(arr[mid]<arr[mid-1]){
                end = mid-1;
            }
            else if(arr[mid]<arr[mid+1]){
                start = mid+1;
            }
        }else{
            if(arr[mid]>arr[mid+1]){
                return arr[mid];
            }
            else if(arr[mid]>arr[mid-1]){
                return arr[mid];
            }
        }
    }
    return 0;
}
int main(){
    vector<int> arr = {5,10,20,15};
    cout<<peak(arr);
    return 0;
}