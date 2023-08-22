class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        
        sort(nums.begin(), nums.end());
        
        for(int i=1; i<n; i++)
        {
            if(i!=nums[i-1]) return false;
        }
        if(n==1) return false;
        if(nums[n-1]!=nums[n-2]) return false;
        
        return true;
        
    }
};