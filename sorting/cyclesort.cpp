#include<iostream>
using namespace std;

void cycleSort(int arr[], int n){
    int i =0;
    while(i<n){
        int c_var = arr[i]-1;
        if(arr[i]!=arr[c_var]){
            swap(arr[i],arr[c_var]);
        }else{
            i++;
        }
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cycleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

//cycle should be implement where element is 1 to N.
