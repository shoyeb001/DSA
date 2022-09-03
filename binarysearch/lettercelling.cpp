#include<iostream>
using namespace std;
int findit(vector<char> arr, char target){
    int start = 0;
    int end = arr.size()-1;
    char res;
    while(start<=end){
        int mid = start + (end-start)/2;
         if(target<arr[mid]){
            end = mid-1;
             res = arr[mid];
        }
        else{
            start = mid+1;
        }
    }
    return res;
}
int main() {
 vector<char> arr = {'a','b','d','g','r','u','y'};
    char target = 'e';
    cout<<char(findit(arr,target));
    return 0;
}