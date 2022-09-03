#include<iostream>
using namespace std;

//moore's voing algo
//find majority element

int main(){
    vector<int> arr = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int count = 0;
    int ele = 0;
    for(int i=0;i<arr.size();i++){
        if(count==0){
            ele = arr[i];
        }
        if(ele==arr[i]){
            count = count + 1;
        }
        else{
            count = count-1;
        }
    }
    cout<<ele<<endl;
}
