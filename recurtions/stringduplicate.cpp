#include <iostream>
using namespace std;

void print(string str, string op){
    if (str.length()==0)
    {
        cout << op << endl;
        return;
    }

    if (op.find(str[0]) != string::npos )
    {
       str.erase(str.begin()+0);
    }else{
        op.push_back(str[0]); 
          str.erase(str.begin()+0);
    }
  
    print(str, op);
    

}

int main(){
    string str = "aabbbbbcc";
    string op="";
    print(str,op);
    return 0;
}
