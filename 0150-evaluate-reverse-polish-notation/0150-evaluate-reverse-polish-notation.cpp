class Solution {
public:
    int evalRPN(vector<string>& tokens) {
          

          stack <int> stk;

          for(int i=0;i<tokens.size();i++)
          {
               if(tokens[i]!="+" &&  tokens[i]!="-" &&  tokens[i]!="*" &&  tokens[i]!="/")
              {
               stk.push(stoi(tokens[i]));
             }
             else
              {
              long long ftop=stk.top();
              stk.pop();
              long long stop=stk.top();
              stk.pop();

              if(tokens[i]=="+")
              {
                  stk.push(stop+ftop);
              }
              else if (tokens[i]=="-")
              {
                    stk.push(stop-ftop);
              }
               else if(tokens[i]=="*")
              {
                  stk.push(stop*ftop);
              }
              else
              {
                    stk.push(stop/ftop);
              }
            }
        }
            
    return stk.top();
    }
};