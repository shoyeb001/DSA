class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n==1){
            return n;
        }
        int start = 0;
        int end = n-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(mid-1>0 && mid+1<n){
                if(nums[mid]==nums[mid+1] || nums[mid]==nums[mid-1]){
                   if((mid%2)==1){
                    start = mid+1;
                   }
                    else{
                    end = mid-1;
                   }
                }
            }
            else if(mid-1<0 && nums[mid]==nums[mid+1]){
                start = mid+1;
            }
            else if(mid+1 >n-1 && nums[mid]==nums[mid-1]){
                end = mid-1;
            }
            
            else{
                return nums[mid];
            }
        }
        return -1;

    }
};