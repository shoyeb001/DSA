//letter case permulation with recursion
#include <iostream>
#include<vector>
using namespace std;

void solve(string ip, string op, vector<string>&v){
    if (ip.length()==0)
    {
      v.push_back(op);
      return;
    }
    string op1= op;
    string op2 = op;
    op1.push_back(tolower(ip[0]));
    op2.push_back(toupper(ip[0]));
    ip.erase(ip.begin()+0);
    solve(ip,op1,v);
    solve(ip,op2,v);
    
}

int main(){
    string ip, op;
    vector<string>v;
    cout << "Enter the string" << endl;
    cin >> ip;
    op="";
    solve(ip,op,v);
    for(int i=0; i<v.size(); i++)
     cout << v[i] << endl;
    return 0;
}
