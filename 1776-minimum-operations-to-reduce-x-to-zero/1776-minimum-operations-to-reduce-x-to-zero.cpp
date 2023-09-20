class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        int n= nums.size();
        vector<int> prefix_sum;
     
        for(int i=0; i<n; i++)
        {
            
            sum+= nums[i];
            prefix_sum.push_back(sum);
        }
        
        if(prefix_sum[n-1] < x) return -1;
        int op=0, ans=1e7;
        sum=0;
        for(int i=n-1;  i>=0; i--)
        {
            auto it = lower_bound(prefix_sum.begin(),prefix_sum.end(),x-sum);
            int tmp = it-prefix_sum.begin();
            if(*it + sum == x  && i != tmp)
            {
                //cout<<tmp<<" "<<i<<endl;
                ans = min(ans,(n-i-1)+(tmp+1));
                
            }
            sum+= nums[i];
            if(sum==x)
            {
                ans=min( n-i, ans);
               
            }
            if(sum>x) break;
           
        }
        if(ans == 1e7) ans=-1;
        return ans;
    }
};