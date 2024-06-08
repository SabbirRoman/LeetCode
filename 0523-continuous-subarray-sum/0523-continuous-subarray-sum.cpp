class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // Pura Matha Nosto Solution;
        // Just Mind blowing Solution;

        long long int sum = 0;
        unordered_map<long long, int> my_map;
        if(nums.size()==1) return false;
        for(int i=0; i<nums.size(); i++)
        {
            if(i>0 && nums[i-1]==0 && nums[i]==0) return true; // [5,0,0,0] and k = 3
            if(nums[i]==0) continue; // [0] as length should be at least 2
            sum += nums[i];
            //  cout<<sum<<" "<<sum%k<<endl;
            if((my_map[sum%k]>0 && i+1-my_map[sum%k]>=2) || (i!=0 && sum%k==0)) return true;
            // main portion: sum%k jodi repeat kore; tahole bujhte hbe majher gular sum%k==0 hobe
            my_map[sum%k]=i+1;
        }
        return false;
    }
};