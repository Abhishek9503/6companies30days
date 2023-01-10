class Solution {
public:
    vector<vector<int>>ans;
    void help(int i,vector<int>&C,int t,vector<int>&sol)
    {
        if(t==0)
        {
            ans.push_back(sol);
            return;
        }
        if(t<0)
        {
            return ;
        }
        if(i==C.size())
        {
            return ;
        }
        
        help(i+1,C,t,sol);
        
        
        sol.push_back(C[i]);
        help(i,C,t-C[i],sol);
        
        sol.pop_back();
    
    }
    

    vector<vector<int>> combinationSum(vector<int>&C, int t) {
        
        
        vector<int>sol;
        help(0,C,t,sol);
        return ans;
        
    }
};