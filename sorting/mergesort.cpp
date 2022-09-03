#include<iostream>
using namespace std;

void merge(int arr[],int start, int mid, int end){
    int merged[end-start+1];
    int index1 = start;
    int index2 = mid + 1;
    int x = 0; //new array index
    
    while(index1<=mid && index2<=end){
        if(arr[index1]<=arr[index2]){
            merged[x] = arr[index1];
            x++;
            index1++;
        }else{
            merged[x] = arr[index2];
            x++;
            index2++;
        }
    }
    while(index1<=mid){
        merged[x]=arr[index1];
        x++;
        index1++;
    }
    
    while(index2<=end){
        merged[x] = arr[index2];
        x++;
        index2++;
    }
    
    int s = sizeof(merged)/sizeof(merged[0]);
    
    for(int i=0, j=start; i<s; i++,j++){
        arr[j] = merged[i];
    }
}

void devide(int arr[], int start, int end){
    if(start>=end){
        return;
    }
    int mid = start+(end-start)/2;
    devide(arr,start,mid);
    devide(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main(){
    int arr[] = {3,6,1,7,4,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    devide(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
