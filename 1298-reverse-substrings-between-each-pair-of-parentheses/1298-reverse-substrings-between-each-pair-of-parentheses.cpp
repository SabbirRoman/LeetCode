class Solution {
public:
    // Iterative solution
    string reverseParentheses(string s) {
        string res;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==')')
            {
                string tmp;
                
                while(1)
                {
                    int sz = res.size();
                    if(res[sz-1]=='(')
                    {
                        res.pop_back();
                        break;
                    }
                    else
                    {
                        tmp += res[sz-1];
                        res.pop_back();
                    }
                }
                res +=tmp;
            }
            else
            {
                res +=s[i];
            }
        }
        return res;
    }
};