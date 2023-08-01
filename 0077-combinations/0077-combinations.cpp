class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        int arr[n];
        for(int i=0; i<n; i++) arr[i]=i+1;
        
        vector<vector<int>>ans;
        
        int tmp=pow(2,n);
        //cout<<" tmp ="<<tmp<<endl;
        for(int i=0; i<tmp; i++)
        {
            vector<int>v;
            if(__builtin_popcount(i)==k)
            {
               // cout<<i<<"= i ";
                int tmp2=i;
                for(int j=0; j<n; j++)
                {
                    if(tmp2&1) {
                        //cout<<arr[j]<<" ";
                        v.push_back(arr[j]);
                    }
                    tmp2 >>= 1;
                   
                }
                 //cout<<endl;
                    ans.push_back(v);
       
            }    
            
        }
        
        return ans;
    }
};