class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int sz = nums.size(), ans=0;
        vector<int> v(sz+1);
        for(int i=0; i<sz+1; i++) v[i]=0;
        int tmp = 0;
        for(int i=0; i<sz; i++)
        {
            tmp += v[i];
            if(tmp%2) nums[i] = abs(1-nums[i]);
            if(nums[i]==0)
            {
                if(i+k <= sz)
                {
                    ans++;
                    v[i] += 1;
                    v[i+k] -=1;
                    tmp++;
                    nums[i] = abs(1-nums[i]);
                }
            }
            
           
        }

        for(int i=0; i<sz; i++)
        {
            
            if(nums[i]==0)
            {
                ans = -1;
                break;
            }
        }
        

        return ans;
    }
};