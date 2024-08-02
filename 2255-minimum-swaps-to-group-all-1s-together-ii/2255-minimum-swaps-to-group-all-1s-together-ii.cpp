class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int  cnt_one=0, N = nums.size();
        vector<int>ones;
        ones.push_back(cnt_one);
        for(int i=0; i<N; i++)
        {
            if(nums[i]==1)
            {
                cnt_one++; 
            }
            ones.push_back(cnt_one);
        }
        int ans = N;
        for(int i=0; i<N; i++)
        {
            int j= i+cnt_one;
            if(j>N)
            {
                int tmp = ones[N]-ones[i];
                tmp += ones[j%N];
                tmp = cnt_one - tmp;
                ans = min(ans,tmp);
            }
            else
            {
                int tmp = cnt_one - (ones[j]-ones[i]);
                ans = min(ans,tmp);
            }
        }

        return ans;


    }
};