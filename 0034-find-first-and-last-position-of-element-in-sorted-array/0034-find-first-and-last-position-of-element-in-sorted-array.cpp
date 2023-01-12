class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        auto lb=lower_bound(nums.begin(),nums.end(),target);
       auto ub=upper_bound(nums.begin(),nums.end(),target);
        
        if(lb==ub) return{-1,-1};
        int l=lb-nums.begin();
        int u=ub-nums.begin();
        
        return {l,u-1};
        
    }
};