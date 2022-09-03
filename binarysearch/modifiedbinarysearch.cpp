#include<iostream>
using namespace std;
int findit(vector<int> arr, int target){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(target==arr[mid]){
            return mid;
        }
        else if((mid-1)>=start&&arr[mid-1]==target){
            return mid-1;
        }
        else if((mid+1)<=end && arr[mid+1]==target){
            return mid+1;
        }
        else if(target<arr[mid]){
            end = mid-2;
        }
        else{
            start = mid+2;
        }
    }
    return 0;
}
int main() {
 vector<int> arr = {5,10,30,20,40};
    int target = 20;
    cout<<findit(arr,target);
    return 0;
}