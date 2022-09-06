//Given an array containing N positive numbers and an integer k. Find the size of longest subarray with sum of the elements equal to the given value k.


#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>arr,int k,int n) {
   int mx=0;
   int sum=0;
   int j=0; int i=0;
   while(j<n){
       sum = sum+arr[j];
       if(sum<k){
           j++;
       }
       else if(sum==k){
           mx = max(j-i+1,mx);
           j++;
       }
       else if(sum>k){
           while(sum>k){
               sum = sum-arr[i];
               i++;
               j++;
           }
       }
   }
   return mx;
}


int main(){
    vector<int>arr = {4,1,1,1,2,3,5};
    int k=6;
    int n = arr.size();
    int ans = findMax(arr,k,n);
    cout<<ans<<endl;
    return 0;
}
