#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int> arr, int start, int end, int target){
    while(start<=end){
        int mid = start + (end-start)/2;
        if(target==arr[mid]){
            return mid;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return 0;
}
int bsreverse(vector<int> arr, int start, int end, int target){
    
    while(start<=end){
        int mid = start + (end-start)/2;
         if(target==arr[mid]){
            return mid;
        }
        else if(target<arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return 0;
}
int peak(vector<int> arr){
   int size = arr.size();
    int start = 0;
    int end = size-1;
    while(start<=end){
       int mid = start + (end-start)/2;
        if(mid>0 && mid<size-1){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]<arr[mid-1]){
                start = mid+1;
            }
            else if(arr[mid]<arr[mid+1]){
                end = mid-1;
            }
        }else{
            if(arr[mid]>arr[mid+1]){
               return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                return mid;
            }
        }
    }
    return 0;
}
int main(){
    vector<int> arr = {5,10,20,15,14,13};
    int high = peak(arr);
    int size = arr.size();
    int target = 13;
    if((bs(arr,0,high,target))!=0){
        cout<<bs(arr,0,high,target);
    }
    if((bsreverse(arr,high+1,size-1,target))!=0){
        cout<<bsreverse(arr,high+1,arr.size()-1,target);
    }
    return 0;
}