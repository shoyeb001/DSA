#include<bits/stdc++.h>
using namespace std;

vector<int>left(vector<int>arr){
    stack<pair<int,int>>s;
    vector<int>v;
    for(int i=0;i<arr.size();i++){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top().first<arr[i]){
            v.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=arr[i]){
            while(s.size()>0 && s.top().first>=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }
            else if(s.top().first<arr[i]){
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }
        return v;
}

vector<int>right(vector<int>arr){
    stack<pair<int,int>>s;
    vector<int>v;
    int dummy = arr.size();
    for(int i=arr.size()-1;i>=0;i--){
        if(s.size()==0){
            v.push_back(dummy);
        }
        else if(s.size()>0 && s.top().first<arr[i]){
            v.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=arr[i]){
            while(s.size()>0 && s.top().first>=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(dummy);
            }
            else if(s.top().first<arr[i]){
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }
    reverse(v.begin(),v.end());
        return v;
}

int main(){
    vector<int>arr = {6,2,5,4,5,1,6};
    vector<int>nsl = left(arr);
    vector<int>nsr = right(arr);
    vector<int>width;
    vector<int>area;
    for(int i=0; i<arr.size();i++){
        width.push_back(nsr[i]-nsl[i]-1);
    }
    for(int i=0;i<width.size();i++){
        area.push_back(width[i]*arr[i]);
    }
    for(int i=0;i<area.size();i++){
        cout<<area[i]<<endl;
    }
}
