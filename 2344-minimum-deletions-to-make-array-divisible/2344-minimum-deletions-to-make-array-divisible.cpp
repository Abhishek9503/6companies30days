class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        
        sort(nums.begin(),nums.end());
        sort(numsDivide.begin(),numsDivide.end());
        
        int cnt=0;
        int rem=numsDivide[0];
        
        for(int i=0;i<numsDivide.size();i++)
        {
            rem=__gcd(rem,numsDivide[i]);
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(rem%nums[i]==0)
            {
                return cnt;
            }
            cnt++;
        }
        return -1;
    }
};