//find the size of maximum substring with unique k characters.

#include<bits/stdc++.h>
using namespace std;

int longestString(string str,int k){
    int n = str.length();
    int i=0; int j=0;
    map<char,int>mp;
    int mx=INT_MIN;
    while(j<n){
        mp[str[j]]++;
        if(mp.size()<k){
            j++;
        }
        else if(mp.size()==k){
            mx = max(mx,j-i+1);
            j++;
        }
        else if(mp.size()>k){
            while(mp.size()>k){
                mp[str[i]]--;
                if(mp[str[i]]==0){
                    mp.erase(str[i]);
                }
                i++;
            }
            j++;
        }
    }
    return mx;
}

int main(){
    string str = "aabbccccccefg";
    int k=3;
    int max = longestString(str,k);
    cout<<max<<endl;
    return 0;
}
