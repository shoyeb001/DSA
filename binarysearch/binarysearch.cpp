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
        else if(target<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return 0;
}
int main() {
 vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int target = 7;
    cout<<findit(arr,target);
    return 0;
}