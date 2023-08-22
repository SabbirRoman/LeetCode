class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n= stones.size();
        vector<set<int>> v(n);
       if(stones[0]+1 ==stones[1]) v[1].insert(1);

        for(int i=1; i<n-1; i++)
        {
            
            for(auto x: v[i])
            {
                int tmp2= stones[i]+x;
                
                    auto it= lower_bound(stones.begin(),stones.end(),tmp2);
                   int tmp= it-stones.begin();
                   if(tmp<n && tmp2==*it) v[tmp].insert(x);
                

                tmp2= stones[i]+x+1;
                
                     it= lower_bound(stones.begin(),stones.end(),tmp2);
                    tmp= it-stones.begin();
                   if(tmp<n && tmp2== *it) v[tmp].insert(x+1);
                
                tmp2= stones[i]+x-1;
                if(tmp2==stones[i]) continue;
                     it= lower_bound(stones.begin(),stones.end(),tmp2);
                    tmp= it-stones.begin();
                  if(tmp<n && tmp2== *it)  v[tmp].insert(x-1);
                

            }
        }
      
        return v[n-1].size()>0;

    }
};