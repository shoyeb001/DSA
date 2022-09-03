#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int> arr, int n, int cows, int mid){
    int count=1;
    int cow = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-cow >=mid){
            count++;
            cow = arr[i];
        }
       
    }
     if(count>=cows){
            return true;
        }
    return false;
}
int solve(vector<int> arr, int cows){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int start = 1;
    int end = arr[n-1] - arr[0];
    int res = -1;
    while(end>=start){
        int mid = start + (end-start)/2;
        if(isvalid(arr,n,cows,mid)){
             res = mid;
            start = mid+1;
        }
        else{
            end = mid -1;
        }
    }
    return res;
}

int main(){
   vector<int> arr = {1,2,8,4,9};
    int cows = 3;
    cout << solve(arr,cows);
    return 0;
}
