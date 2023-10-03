class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans =0;
        map<int,int>mp1;
        for(int i=0; i<nums.size(); i++)
        {
            mp1[nums[i]]++;
        }

        for(auto x: mp1)
        {
            int tmp = x.second;
            ans += (tmp*(tmp-1))/2;
        }
        return ans;
    }
};