class Solution {
public:
    int minDifference(vector<int>& nums) {
        int sz = nums.size(), ans=INT_MAX ;
        if(sz<=4)  ans = 0;
        else{
            sort(nums.begin(),nums.end());
            for(int i=0; i<=3; i++)
            {
                ans = min(ans, nums[sz-(4-i)]-nums[i]);
                cout<<sz-(4-i)<<" "<<i<<endl;
            }
        }
        return ans;
    }
};