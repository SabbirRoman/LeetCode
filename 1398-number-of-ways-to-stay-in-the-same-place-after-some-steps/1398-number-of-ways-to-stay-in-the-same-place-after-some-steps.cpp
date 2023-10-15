class Solution {
public:
    vector<vector<int>>memo;
    int MOD = 1e9 + 7;
    int len;

    int dp(int curr, int remain)
    {
        if(remain == 0)
        {
            if(curr == 0)
            {
                return 1;
            }
            return 0;
        }
        if(memo[curr][remain] != -1)
        {
            return memo[curr][remain];
        }
        int ans = dp(curr, remain-1);
        if(curr > 0)
        {
            ans = (ans + dp(curr-1, remain-1)) % MOD;
        }
        if(curr < len-1)
        {
            ans = (ans + dp(curr+1, remain-1))% MOD;
        }
        memo[curr][remain] = ans;
        return ans;
    }
    int numWays(int steps, int arrLen) {
        len = min(steps,arrLen);
        memo = vector(len, vector(steps+1, -1));
        return dp(0,steps);
    }
};