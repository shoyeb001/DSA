#include <bits/stdc++.h>
using namespace std;
bool isvalid(vector<int> arr, int size, int k, int max){
    int std = 1;
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum+arr[i];
        if(sum>max){
            std++;
            sum = arr[i];
        }
        if(std>k){
            return false;
        }
    }
    return true;
}
int solve(vector<int> arr, int size, int max, int k){
   int  start = max;
   int end = 0;
    for(int i=0;i<size;i++){
        end = end+arr[i];
    }
    int res = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(isvalid(arr,size,k,mid)){
            res = mid;
            end = mid -1;
        }
        else{
            start = mid +1;
        }
    }
    return res;
}
int main(){
    vector<int> arr = {10,20,30,50,40};
    int size = arr.size();
    int k = 2;
    int max = *max_element(arr.begin(),arr.end());
    cout<<solve(arr,size,max,k);
    return 0;
}