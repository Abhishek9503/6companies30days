class Solution {
    public boolean increasingTriplet(int[] nums) {
         int f = Integer.MAX_VALUE,  s=Integer.MAX_VALUE;   // yt : Naresh Gupta
        
    for(int num:nums)
    {
        if(num<=f)
        {
            f=num;
        }
        else if(num<=s)
        {
            s=num;
        }
        else{
            return true;
        }
    }
    return false; 
    }
}