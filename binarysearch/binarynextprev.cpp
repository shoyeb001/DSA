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
int findit(vector<int> arr){
    int start = 0;
    int n = arr.size();
    int end = n-1;
    while(start<=end){
       int mid = start + (end - start) / 2;
        int prev = (mid - 1 + n) % n;
        int next = (mid + 1) % n;
 
        if (arr[mid] <= arr[prev]
            && arr[mid] <= arr[next])
            return mid;
        else if (arr[mid] <= arr[end])
            end = mid - 1;
        else if (arr[mid] >= arr[start])
            start = mid + 1;
    }
    return -1;
}
int main() {
 vector<int> arr = {11,12,15,18,2,5,6,8};
    int target = 12;
    int min = findit(arr);
    if((bs(arr,0,min-1,target))!=0){
        cout<<bs(arr,0,min-1,target);
    }
    if((bs(arr,min+1,arr.size()-1,target))!=0){
        cout<<bs(arr,min+1,arr.size()-1,target);
    }
    return 0;
}