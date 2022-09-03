#include<iostream>
#include<vector>
using namespace std;

double countmin(vector<int> arr1, vector<int> arr2){
    int low = 0;
    int n1 = arr1.size();
    int n2 = arr2.size();
    int high = n1;
    int cut1;
    int cut2;
    int l1;
    int l2;
    int r1;
    int r2;
    if(n1>n2){
        return countmin(arr2,arr1);
    }
    
    while(low<=high){
       cut1 = low + (high-low)/2;
        cut2 = ((n1+n2)/2) - cut1;
        if(cut1==0){
            l1 = INT_MIN;
        }
        else{
            l1 = arr1[cut1-1];
        }
        if(cut2 == 0){
            l2 = INT_MIN;
        }
        else{
            l2 = arr2[cut2-1];
        }
        if(cut1==n1){
            r1 = INT_MAX;
        }
        else{
            r1 = arr1[cut1];
        }
         if(cut2==n2){
            r1 = INT_MAX;
        }
        else{
            r2 = arr2[cut2];
        }
        if(l1<=r2 && l2<=r1){
            if((n1+n2)%2==0){
              return (max(l1,l2) + min(r1,r2))/2.0;
            }else{
                return min(r1,r2);
            }
        }
       else if(l1>r2){
            high = cut1-1;
        }
        else{
           low = cut1+1;
        }
        
    }
    return 0.0;
}

int main(){
    vector <int> arr1 = {1,5,8,10,18,20};
    vector<int> arr2 = {2,3,6,7};
    cout<<countmin(arr1,arr2);
    return 0;
}