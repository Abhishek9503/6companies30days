class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n=points.size()   ;
        int total=0;
        for(int i=0;i<n;i++)
        {
            map<int,int>mp;
            for(int j=0;j<n;j++)
            {
                int dist=((points[i][0]-points[j][0])*(points[i][0]-points[j][0]))+((points[i][1]-points[j][1])*(points[i][1]-points[j][1]));
                          mp[dist]++;
            }
                          for(auto i:mp)
                          {
                              if(i.second) total=total+(i.second*(i.second-1));
                              
                          }
        }
                          return total;
    }
};