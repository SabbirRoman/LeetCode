class Solution {
public:
    bool isPrime(int n)
    {
        if(n==1) return false;
        for(int i=2; i*i <= n; i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int i=0, j= nums.size()-1;
        for( i=0; i<nums.size(); i++)
        {
            if(isPrime(nums[i])){
                cout<<i<<endl;
                break;
            }
        }
        for( ;j>=0; j--)
        {
            if(isPrime(nums[j])){
                cout<<j<<endl;
                break;
            }
        }
        return j-i;
    }
};