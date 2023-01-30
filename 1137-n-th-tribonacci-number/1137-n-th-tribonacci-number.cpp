class Solution {  // yt nive
public:
    int solve(int n , vector<int> &nums)
    {
        for(int i=3;i<=n;i++)
        {
            nums[i]=nums[i-1]+nums[i-2] +nums[i-3];
        } return nums[n];
    }
    
    int tribonacci(int n) {
       vector<int>nums(38,-1);
           nums[0]=0,nums[1]=1,nums[2]=1;
        return solve(n,nums);
    }
};