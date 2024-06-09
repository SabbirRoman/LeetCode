class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int,int>my_map;
        int ans = 0;
        my_map[0] = 1;
        for(int i=0; i<nums.size(); i++)
        {
            
            sum =((sum + nums[i])%k +k)%k;
            ans += my_map[sum];
            my_map[sum]++;
        }
        
        

        return ans;
    }
};