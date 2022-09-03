#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a=b;
     b = temp;
}

void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                min = j;
            }
        }
        swap(arr[i],arr[min]); //pass by reference
    }
}

int main(){
    int data[]={4,3,7,1,9};
    int n = sizeof(data) / sizeof(data[0]);
    selectionsort(data,n);
    for(int i=0;i<n;i++){
       cout<<data[i];
   }
}
