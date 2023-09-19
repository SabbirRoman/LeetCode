class Solution {
public:
    int findDuplicate(vector<int>& nums) {
          int n = nums.size();

        int arr[n+1], ans;
        for(int i=1; i<=n; i++) arr[i]=0;
            for(auto x: nums)
            {
                if(arr[x]!=0) ans = x;
                arr[x]++;
            }
            return ans;
    }
};