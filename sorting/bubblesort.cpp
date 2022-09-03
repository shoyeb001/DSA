#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a=b;
     b = temp;
}

void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int data[]={4,3,7,1,9,32,31,5,7,10};
    int n = sizeof(data) / sizeof(data[0]);
    bubblesort(data,n);
    for(int i=0;i<n;i++){
       cout<<data[i]<<endl;
   }
}
