class Solution {
public:
    
    vector<int>flag;
    bool ans;
    void solve(int n,  vector<int>& arr, int start)
    {
        if(start<0 || start>=n) return;
        
        if(flag[start]==1 || ans==1) return;
        
        
        
        if(arr[start]==0)
        {
           // cout<<start<<" start"<<endl;
            ans=true;
           // cout<<ans<<endl;
            return;
        }
        flag[start]=1;
        solve(n,arr, start+arr[start]);
         solve(n,arr, start-arr[start]);
        
        
        
        return;
    }
    
    bool canReach(vector<int>& arr, int start) {
       int n=arr.size();
        
        for(int i=0; i<n; i++)flag.push_back(0);
        
         ans=false;
        
        solve(n,arr,start);
        //cout<<"hoilo ki eta "<<ans<<endl;
        return ans;
        
    }
};