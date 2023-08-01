class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        for(int i=0; i<n; i++) dp[i]=1000000;
        dp[0]=0;
        for(int i=0; i<n; i++)
        {
            for(int j=min(i+nums[i],n-1); j>i; j--)
            {
                dp[j]=min(dp[j],1+dp[i]);
            }
        }

        return dp[n-1];
    }
};