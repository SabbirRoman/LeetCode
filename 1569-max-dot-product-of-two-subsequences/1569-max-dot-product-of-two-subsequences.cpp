class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size(), m=nums2.size();
        int dp[n+1][m+1];
        for(int i=0; i<=n; ++i) dp[i][0]=-1e9;
        for(int i=0; i<=m; ++i) dp[0][i]=-1e9;
        int ans=-1e9;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int tmp = nums1[i]*nums2[j];
                if(dp[i][j] > 0) tmp +=dp[i][j];
                dp[i+1][j+1] = max({dp[i+1][j], tmp, dp[i][j+1] });

            }
        }
      

        return dp[n][m];
    }
};