#include <iostream>
#include <set>
using namespace std;

void perm(int pos, int len, string s, set<string>&str){
    if (pos==len-1)
    {
        str.insert(s);
        return;
    }
    perm(pos+1,len,s,str);
    s.insert(pos+1," ");
    perm(pos+2,len+1,s,str);
    s.erase(pos+1,1);

}
int main(){ 0
    string s;
    int pos = 0;
    cin >> s;
    int len = s.length();
    set<string>str;
    perm(pos,len,s,str);
    for (auto it = str.begin(); it != str.end(); it++)
        cout << *it << endl;
}
