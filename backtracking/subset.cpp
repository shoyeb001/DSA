#include <iostream>
#include <set>
using namespace std;

void solve(int i, int arr[], int n, set<set<int>>&sets, set<int>subset){
    if (i==n)
    {
        sets.insert(subset);
        return;
    }
    solve(i+1,arr,n,sets,subset);
    subset.insert(arr[i]);
    solve(i+1,arr,n,sets,subset);
    subset.erase(arr[i]);
    
    
}

int main(){
    int i = 1;
    int arr[3]={1,2,3};
    int n = 3;
    set<set<int>>sets;
    set<int>subset;
    solve(i,arr,n,sets,subset);
    for (auto it = sets.begin(); it != sets.end(); it++){
        cout << (*it) << " ";
    }
}
