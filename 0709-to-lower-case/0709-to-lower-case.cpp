class Solution {  // Code with alisha
public:
    string toLowerCase(string s) {
      int i=0;
        for(char x:s)
        {
            if(x>=65 && x<=90)
            {
                x=x+32;
                s[i]=x;
            }
            i++;
        }
        return s;
    }
};