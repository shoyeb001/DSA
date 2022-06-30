#include<iostream>
#include<vector>
using namespace std;

void csum(int i, int sum, int target, vector<int>&currentcom, vector<vector<int>>res, int &arr){
    if (sum==target)
    {
        res.push_back(currentcom);
    }
    if (i==arr.size() || sum>target)
    {
        return;
    }
    sum += arr[i];
    currentcom.push_back(arr[i]);
    csum(i,sum,target,currentcom,res,arr);
    sum -=arr[i];
    currentcom.pop_back();
    csum(i+1,sum,target,currentcom,res,arr);
}

int main(){
    int arr[3] = {1,2,3};
    vector<int>currentcom;
    vector<vector<int>>res;
    csum(0,0,3,currentcom,res,arr);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<
    }
    
}
