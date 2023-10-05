class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int len = nums.size(), tmp=1;
        for(int i=1; i<len; ++i)
        {
            if(nums[i-1] == nums[i]) tmp++;
            else
            {
                if(tmp > len/3) ans.push_back(nums[i-1]);
                tmp = 1;
            }
        }
        if(tmp > len/3) ans.push_back(nums[len-1]);

        return ans;
    }
};