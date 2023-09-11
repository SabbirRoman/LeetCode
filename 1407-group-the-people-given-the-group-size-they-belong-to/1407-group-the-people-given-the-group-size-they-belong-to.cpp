class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n= groupSizes.size();
        vector<vector<int>> v(n+1);
        for(int i=0; i<n; i++)
        {
            int tmp= groupSizes[i];
            v[tmp].push_back(i);
        }
        
        vector<vector<int>> ans;
        for(int i=1; i<=n; i++)
        {
    
            for(int j=0; j<v[i].size(); )
            {
               
                int tmp=i;
                vector<int> temp2;
                while(tmp--)
                {
                    temp2.push_back(v[i][j]);
                    j++;
                }
                ans.push_back(temp2);
               
            }
            
        }

        return ans;
    }
};