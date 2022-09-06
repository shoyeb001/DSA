class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int>mp;
        int n1 = t.length();
        for(int i=0;i<n1;i++){
            mp[t[i]]++;
        }
        int count = mp.size();
        int i=0;
        int j=0;
        int n= s.size();
        int startindex = 0;
        int len = INT_MAX;
        string res;
        while(j<n){
            //calculation
            if(mp.find(s[j]) != mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count--;
                }
            }
            //calculation ends
            
            if(count>0){
                j++;
            }
            else if(count==0){
                if(j-i+1<len){
                    len = min(len,j-i+1);
                    startindex = i;
                    res = s.substr(startindex,len); //starting substring from i to len
                }
                while(count==0){
                    if(mp.find(s[i]) == mp.end()){ //if i not present in map
                        i++;
                        if(j-i+1<len){
                            len = min(len,j-i+1);
                            startindex = i;
                            res = s.substr(startindex,len);
                        }   
                    }
                    else{//if i found in map
                        mp[s[i]]++;
                        if(mp[s[i]]==1){//
                            count++;
                            i++;
                        }
                        else{
                            i++;
                            if(j-i+1<len){
                            len = min(len,j-i+1);
                            startindex = i;
                            res = s.substr(startindex,len);
                           }   
                        }
                    }
                }
                j++;
            }
        }
        return res;
    }
};
