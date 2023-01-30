class Solution { // Ku Sh
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
       
        int curr=0, total =0;
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
            {
                curr=curr+1;
                total=total+curr;
            }
            else{
                curr=0;
                
            }
        }
        return total;
        
    }
};