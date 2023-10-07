class Solution {
public:
    int dp[51][51][101];
    int n, m, k;
    const int MOD = 1000000007;
    
    int solve(int idx, int lenlis, int lar) {
        if (idx == n) {
            if (lenlis == k) {
                return 1;
            }
            return 0;
        }
        
        if (dp[idx][lenlis][lar] != -1) {
            return dp[idx][lenlis][lar];
        }
        
        int ans = 0;
        for (int i = 1; i <= m; i++) {
            if (i > lar) {
                ans = (ans + solve(idx + 1, lenlis + 1, i)) % MOD;
            } else {
                ans = (ans + solve(idx + 1, lenlis, lar)) % MOD;
            }
        }
        
        return dp[idx][lenlis][lar] = ans;
    }
    
    int numOfArrays(int N, int M, int K) {
        n = min(N, 50); // Applying the constraint 1 <= n <= 50
        m = min(M, 100); // Applying the constraint 1 <= m <= 100
        k = min(K, n); // Applying the constraint 0 <= k <= n
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, 0);
    }
};