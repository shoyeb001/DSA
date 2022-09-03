#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a=b;
     b = temp;
}

void sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp= arr[i];
        int j = i-1;
        while(j>=0){
           if(arr[j]>temp){
               arr[j+1] = arr[j];
           }else{
               break;
           }
            j--;
        }
        arr[j+1] = temp;
        
    }
}

int main(){
    int data[]={4,3,7,1,9,32,31,5,7,10};
    int n = sizeof(data) / sizeof(data[0]);
    sort(data,n);
    for(int i=0;i<n;i++){
       cout<<data[i]<<endl;
   }
}
