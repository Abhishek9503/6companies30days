/*
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
       int n = points.size();
        if(n == 1)
            return 1;
        
        int result = 0;
        
        for(int i = 0; i<n; i++) {
            
            unordered_map<double, int> mp;
            
            for(int j = 0; j<n; j++) {
                
                if(i == j) continue;
                
                auto dy = points[j][1] - points[i][1];
                auto dx = points[j][0] - points[i][0];
                auto slope = atan2(dy, dx);
                
                mp[slope]++;
                
            }
            
            for(auto &it : mp) {
                result = max(result, it.second+1);
            }
        }
        
        return result;
    }
};

*/

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
       int n=points.size();
        int result=0;
        if(n==1)
            return 1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int count =2;
                
                int dx=points[j][0] -points[i][0];  //(x2-x1)
                int dy=points[j][1]-points[i][1]; // (y2-y1)
                /*
                dy/dx==dy_/dx_
                dx*dy_==dy*dx_
                */
                
                for(int k=0;k<n;k++)
                {
                    if(k!=i&& k!=j)
                    {
                       int dx_ =points[k][0]-points[i][0];  //(x3-x1)
                         int dy_ =points[k][1]-points[i][1]; // (y3-y1)
                        
                        if(dy*dx_==dy_*dx)
                        {
                            count ++;
                        }
                    }
                }
                result=max(result,count);
            }
        }
        return result;
        
    }
};