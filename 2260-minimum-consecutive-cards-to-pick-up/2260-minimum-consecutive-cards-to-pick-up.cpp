class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        map<int,vector<int>>mp;

        for(int i=0;i<cards.size(); i++)  mp[cards[i]].push_back(i);
        int mini=1e9;

        for(auto i:mp)
        {
            auto pos=i.second;
            if(pos.size()>=2)
            {
                for(int j=1;j<pos.size();j++) mini=min(mini,pos[j]-pos[j-1]+1);
            }
        }
        return (mini==1e9 ? -1:mini);
    }
};