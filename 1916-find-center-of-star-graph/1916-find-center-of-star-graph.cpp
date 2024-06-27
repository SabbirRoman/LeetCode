class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>my_map;
        int sz = edges.size();
        for(int i=0; i<edges.size(); i++)
        {
            my_map[edges[i][0]]++;
            my_map[edges[i][1]]++;
        }

        int ans ;
        for(auto x : my_map)
        {
           
            if( x.second == sz)
            {
                ans = x.first;
                break;
            }
        }
        return ans;
    }
};