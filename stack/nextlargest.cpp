//next largest element or nearest largest element to right

#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    vector<int>v;
    vector<int>arr = {2,1,3,5,4,7,9};
    for(int i=arr.size()-1;i>=0;i--){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i]){
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i]){
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }
            else if(s.top()>arr[i]){
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    
    reverse(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"";
    }
}
