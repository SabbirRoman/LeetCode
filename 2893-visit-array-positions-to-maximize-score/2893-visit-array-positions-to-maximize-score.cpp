class Solution {
public:
    long long maxScore(vector<int>& nums, int x) {
        int n = nums.size();
        long long int dp[n] , ans=nums[0];
         for(int i=0; i<n; i++)
         {
             dp[i]=0;
         }
        dp[0]= nums[0];
        bool first = true;
        for(int i=1; i<n; i++)
        {
            if(nums[i]%2 == nums[i-1]%2)
                {
                    dp[i] = dp[i-1]+ nums[i];
                  
                }
                else
                {
                    dp[i] = dp[i-1]+ nums[i]-x;
                }
            for(int j=i-1; j>=0; j--)
            {
                if(nums[i]%2 == nums[j]%2)
                {
                    dp[i] = max(dp[i], dp[j]+ nums[i]);
                    break;
                  
                }
                else
                {
                    dp[i] = max(dp[i], dp[j]+ nums[i]-x);
                }
            }
            ans= max(ans, dp[i]);
        }
        
       
        return ans;
    }
};