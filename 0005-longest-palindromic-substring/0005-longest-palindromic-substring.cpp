    class Solution {
    public:
        string longestPalindrome(string s) {
           int n=s.size();
            int len=1,start=0;
           int dp[n][n];
            for(int i=0; i<n; i++)
            {
                dp[i][i]=1;
                if(i<n-1)
                {
                    if(s[i]==s[i+1]){
                        dp[i][i+1]=1;
                        len=2;
                        start=i;
                    }
                    else dp[i][i+1]=0;
                }
            }
            
            for(int tmp=2; tmp<n; tmp++)
            {
                for(int i=0; i<n; i++)
                {
                    int j=i+tmp;
                    if(j>=n) break;
                    
                    if(s[i]==s[j] && dp[i+1][j-1])
                    {
                        dp[i][j]=1;
                        if(j-i+1>len)
                        {
                            len=j-i+1;
                            start=i;
                        }
                    }
                    else dp[i][j]=0;
                }
            }
            
            string ans;
            for(int i=start; i<start+len; i++) ans+=s[i];
            
           return ans;
        }
    };