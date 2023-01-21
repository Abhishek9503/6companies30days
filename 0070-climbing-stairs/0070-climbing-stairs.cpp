class Solution {  // Knowledge center 43.9k
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        int x=1,y=2;
        for(int i=3;i<n;++i)
        {
            int temp=y;
            y=y+x;
            x=temp;
        }
        return (x+y);
    }
};