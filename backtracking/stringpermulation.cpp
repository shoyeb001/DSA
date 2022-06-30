#include <iostream>
#include<set>
using namespace std;

void perm(int pos, int len, string s, set<string>&str){
    if (pos == len-1)
    {
        str.insert(s);
        return;
    }
    int i;
    for (int i = pos; i <= len-1; i++)
    {
        swap(s[pos],s[i]);
        perm(pos+1, len, s, str);
        swap(s[pos],s[i]);
    }
}

int main(){
    string s;
    int pos = 0;
    cin >> s;
    int len = s.length();
    set<string>str;
    perm(pos,len,s,str);
    for (auto it = str.begin(); it != str.end(); it++)
        cout << *it << " ";
}
