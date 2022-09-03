//sliding window maximum of size k

#include<bits/stdc++.h>
using namespace std;

vector<int>findMax(vector<int>A, int k, int n) {
    deque<int>max;
    int i=0; int j=0;
    vector<int>ans;
    while(j<n){
        while(!max.empty() && max.back()<A[j]){
            max.pop_back();
        }
        max.push_back(A[j]);
        
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            ans.push_back(max.front());
            if(max.front()==A[i]){
                max.pop_front();
            }
            i++;
            j++;
        }
    }
    return ans;
}


int main(){
    vector<int>A = {1,5,2,3,7,4,-1,5};
    int k=3;
    int n = A.size();
    vector<int>ans = findMax(A,k,n);
    for(auto i:ans){
        cout<<i<<endl;
    }
    return 0;
}
