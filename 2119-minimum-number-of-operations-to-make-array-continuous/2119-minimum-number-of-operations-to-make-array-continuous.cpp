class Solution {
public:
    int minOperations(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        int start =0, ans=len;
        set<int>set1;
        for(int end =0; end < len; end++)
        {
            set1.insert(nums[end]);
            while(nums[end]-nums[start] >= len) {
               if(set1.size() > 0) set1.erase(nums[start]);
                start++;
            }
            int tmp = set1.size();
            ans = min(ans, len - tmp);
            //cout<<ans<<endl;
        }
     
      

        return ans;
    }
};