class Solution {
public:
    int similarPairs(vector<string>& words) {
     int cnt=0;
        vector<set<char>>v;
        for(int i=0;i<words.size();i++)
        {
            set<char>s(words[i].begin(),words[i].end());
            v.push_back(s);
        }
        for(int i=0;i<words.size();i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                if(v[i]==v[j])
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};