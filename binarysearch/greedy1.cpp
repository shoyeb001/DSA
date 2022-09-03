//maximum candies allocated to k children

class Solution {
public:
    int isvalid(vector<int>& candies, long long k, long long mid){
        int count=0;
        for(int i=0;i<candies.size();i++){
            int c = candies[i]/mid;
            if(candies[i]/mid!=0){
                count = count + c;
            }
        }
        if(count>=k){
            return true;
        }else{
            return false;
        }
    }
    
    int maximumCandies(vector<int>& candies, long long k) {
        int start = 0;
        long long sum = accumulate(candies.begin(),candies.end(),0);
        int end = sum/k;
        long long res;
        
        if(sum<k){
            return 0;
        }
        while(start<=end){
            long long mid = (start+end)/2;
            if(isvalid(candies,k,mid)){
                res = mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return res;
        
    }
};
