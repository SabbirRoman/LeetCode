class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
     
        vector<pair<int,int>> v;
        int n= costs.size();
        for(int i=0; i<n; i++)
        {
           int tmp=costs[i][0]-costs[i][1];
            v.push_back({tmp,i});
            
        }
        
        sort(begin(v),end(v));
        int ans=0;
        
        for(int i=0; i<n; i++)
        {
            int j=v[i].second;
            if(i>=n/2) ans+=costs[j][1];
            else ans+=costs[j][0];
        }
        
        return ans;
    }
};