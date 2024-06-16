class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int ans = 0, j = 0, sz = nums.size();
        long long int tmp = 0;
        for(int i=1; i<=n; i++)
        {
            if(tmp >= i) continue;
            else if( i >= nums[j])
            {
                tmp += nums[j];
                j++;
                if(j==sz) break;
            }
            else
            {
                ans++;
                tmp += i;
                //cout<<i<<" ";
            }
        }
        // cout<<ans<<" "<<tmp<<endl;
        while(tmp < n)
        {
            tmp =(tmp*2)+1;
            //cout<<tmp<<" ";
            ans++;
        }
        return ans;
    }
};