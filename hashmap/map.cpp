#include <iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int>m;
    //insert
    //1
    pair <string,int> p1 = make_pair("name",1);
    m.insert(p1);
    //2
    pair <string,int> p2("shoyeb",2);
    m.insert(p2);
    //3
    m["sk"] = 3;
    
    //searching
    //1
    cout<<m["sk"]<<endl;
    //2
    cout<<m.at("shoyeb")<<endl;
    
    //deletation
    m.erase("sk");
    
    
    //print all elements
    
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    
    return 0;
}

