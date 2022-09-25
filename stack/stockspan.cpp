#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<pair<int,int>>s;
    vector<int>v;
    vector<int>arr = {100,80,60,70,60,75,85};
    for(int i=0;i<arr.size();i++){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top().first>arr[i]){
            v.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>0 && s.top().first<=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }
            else if(s.top().first>arr[i]){
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }
        
    for(int i=0;i<v.size();i++){
        v[i] = i-v[i];
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    
}
