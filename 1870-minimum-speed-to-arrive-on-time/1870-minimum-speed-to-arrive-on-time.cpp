class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n=dist.size();
        
        if((n-hour)>1) return -1;
        
        int left=1, right=10000000, res=-1;
        
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            int ans=0;
            
            for(int i=0; i<n-1; i++)
            {
                ans+=dist[i]/mid;
                if(dist[i]%mid) ans++;
            }
            double ans2=dist[n-1]*1.0000;
            ans2 /=(mid*1.0);
            ans2+=ans;
            cout<<mid<<" "<<ans2<<" "<<right<<" "<<left<<endl;
            if((ans2<=hour))
            {
                res=mid;
                right=mid-1;
            }
            else 
            {
                
                left=mid+1;
            }
        }
        
        return res;
    }
};