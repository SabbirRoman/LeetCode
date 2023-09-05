class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size(), m=word2.size();
        int dp[n+1][m+1];

        for(int i=0; i<=n; i++) dp[i][0]=i;
        for(int i=0; i<=m; i++) dp[0][i]=i;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(word1[i]==word2[j])
                {
                    dp[i+1][j+1]= dp[i][j];
                }
                else
                {
                    dp[i+1][j+1] =min({dp[i+1][j], dp[i][j+1], dp[i][j]})+1;
                }
            }
        }
        return dp[n][m];
    }
};