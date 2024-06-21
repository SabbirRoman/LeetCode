class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans = 0;
        int sz = grumpy.size();
        vector<int> v;

        // Calculate the initial satisfaction without using the technique
        for (int i = 0; i < sz; i++) {
            if (grumpy[i] == 0) ans += customers[i];
            else v.push_back(i);
        }

        // If there are no grumpy intervals, return the initial satisfaction
        if (v.empty()) return ans;

        // Sliding window to maximize satisfaction during the grumpy intervals
        int i = 0, j = 0, tmp, ans2 = 0, ans3 = 0;
        while (j < v.size()) {
            // Check the right bound of the current window
            tmp = v[i] + minutes - 1;
            if (v[j] <= tmp) {
                ans2 += customers[v[j]];
                j++;
            } else {
                ans2 -= customers[v[i]];
                i++;
            }
            ans3 = max(ans3, ans2);
        }

        return ans + ans3;
    }
};
