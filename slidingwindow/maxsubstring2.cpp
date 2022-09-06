//3. Longest Substring Without Repeating Characters


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0, j=0;
        map<char,int>mp;
        int mx = INT_MIN;
        int n = s.length();
        if(n==0){
            return 0;
        }
        while(j<n){
            mp[s[j]]++;
            if(mp.size()<j-i+1){
                while(mp.size()<j-i+1){
                    mp[s[i]]--;
                    if(mp[s[i]]==0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
            else if(mp.size()==j-i+1){
                mx = max(mx,j-i+1);
                j++;
            }
        }
        return mx;
    }
};
