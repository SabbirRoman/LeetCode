class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        map< string, int > map1;
        
        for(auto a: wordDict)
        {
            map1[a]++;
           // cout<<a<<" "<<map1[a]<<endl;
        }
        int n=s.size();
        bool dp[s.size()+1];
        
        for(int i=0; i<s.size(); i++) dp[i] =false;
        
        dp[s.size()]= true;
        
        for(int i=s.size()-1; i>=0; i--)
        {
            string temp;
            
            for(int j=i; j<s.size(); j++)
            {
                temp+=s[j];
                if(dp[i]) break;
                if(map1[temp]>0)
                {
                    dp[i]= dp[i+temp.size()];
                }
            }
        }
        
        //for(int i=0; i<n+1; i++) cout<<i<<" "<<dp[i]<<endl;
        
        return dp[0];
    }
};