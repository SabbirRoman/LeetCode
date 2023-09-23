
class Solution {
public:
    int longestStrChain(vector<string>& words) {
        auto cmp = [](string& s1, string& s2) {
            return s1.size() < s2.size();
        };
        sort(words.begin(), words.end(), cmp);

        int n = words.size(), maxLen = 1;
        vector<int> dp(n, 1);

        auto check = [](string& s1, string& s2) {
            if (s1.size() != s2.size() + 1) return false;
            int i = 0, j = 0;
            while (i < s1.size()) {
                if ( j<s2.size() && s1[i] == s2[j]) i++, j++;
                else i++;
            }
            return (i == s1.size() && j == s2.size());
        };

        for (int i = 0; i < n; i++) {
            for (int prev = 0; prev < i; prev++) {
                if (check(words[i], words[prev]) ) dp[i] = max(dp[i], 1 + dp[prev] );
            }
            maxLen = max(maxLen, dp[i]);
        }
        return maxLen;
    }
};