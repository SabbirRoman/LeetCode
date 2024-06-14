class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int prev_val = -1, result = 0;

        for(int i=0; i<nums.size(); i++)
        {
            if(prev_val == nums[i])
            {
                result++;
                prev_val++;
            }
            else if(prev_val > nums[i])
            {
                result += (prev_val+1 - nums[i]);
                prev_val++;
            }
            else
            {
                prev_val = nums[i];
            }
        }

        return result;
    }
};