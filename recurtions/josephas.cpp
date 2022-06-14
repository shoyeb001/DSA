#include <iostream>
#include<vector>
using namespace std;

void solve(vector<int>v, int k, int index, int &ans){
    if (v.size()==1)
    {
       ans = v[0];
       return;
    }
    index = (index+k)%v.size();
    v.erase(v.begin()+index);
    solve(v,k,index,ans);
    
}

int main(){
    int n,k;
    vector<int>v;
    cout << "Enter n";
    cin >> n;
    cout << "Enter k";
    cin >> k;
    for (int i = 0; i < n; i++){
        v.push_back(i);
    }
    
    k = k-1;
    int ans = 0;
    int index = 0;
    solve(v,k,index,ans);
    cout << ans << endl;
    return 0;

}
