class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it1 = lower_bound(nums.begin(), nums.end(), target);
        auto it2 =upper_bound(nums.begin(), nums.end(), target);

        int start = it1- nums.begin();
        int end = it2-nums.begin();
        int n= nums.size();
        vector<int> ans;
        if(start == end) {
            ans.push_back(-1);
             ans.push_back(-1);
        }
        else
        {
             ans.push_back(start);
              ans.push_back(end-1);
        }
        return ans;
    }
};