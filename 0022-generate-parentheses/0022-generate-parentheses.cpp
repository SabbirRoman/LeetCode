class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        
        string s;
        for(int i=0; i<n; i++) s+="()";
        
        sort(s.begin(),s.end());
        
        //cout<<s<<endl;
        do
        {
            int opening_b=0, closing_b=0;
            
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='(') opening_b++;
                else closing_b++;
                
                if(closing_b>opening_b) break;
                
            }
            
            if(opening_b == closing_b) ans.push_back(s);
        }while(next_permutation(s.begin(),s.end()));
        
        
        return ans;
    }
};