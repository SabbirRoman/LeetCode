class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        
        int n= nums.size();
        long long int ans=0, tmp=nums[n-1];
        for(int i=n-2; i>=0; i--)
        {
            if(nums[i]>tmp)
            {
                if(nums[i]%tmp==0)
                {
                    ans+=(nums[i]/tmp);
                    ans--;
                }
                else
                {
                    ans+=(nums[i]/tmp);
                    tmp= nums[i]/tmp;
                    tmp++;
                    tmp= nums[i]/tmp;
                }
            }
            else
            {
                tmp= nums[i];
            }
        }

        

        return ans;
    }
};