#include <iostream>
#include <vector>

using namespace std;

void subset(string str, string op){
    if (str.length()==0){
        cout << op <<endl;
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(str[0]);
    str.erase(str.begin()+0);
    subset(str, op1);
    subset(str, op2);

}    

int main(){
    string str = "abc";
    string op = "";
    subset(str, op);
    return 0;
}

