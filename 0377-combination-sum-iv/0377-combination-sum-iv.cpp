class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        unsigned int dp[target+1];
        for(int i=1; i<=target; i++)
        {
            dp[i]=0;
        }
        dp[0]=1;
        for(int i=1; i<=target; i++)
        {
            for(auto coin: nums)
            {
                if(i-coin >=0 )
                {
                    dp[i] += dp[i-coin];
                }
            }
        }
        //for(int i=0; i<=target; i++) cout<< i <<' '<<dp[i]<<endl;
        return dp[target];
    }
};