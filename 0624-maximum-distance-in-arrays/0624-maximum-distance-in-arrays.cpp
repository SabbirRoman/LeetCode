class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
       
        vector<pair<int,int>> temp;
        for(int i=0; i<arrays.size(); i++)
        {
            int min_num = INT_MAX, max_num = INT_MIN;
            for(int j=0; j<arrays[i].size(); j++)
            {
                min_num = min(min_num,arrays[i][j]);
                max_num = max(max_num,arrays[i][j]);
            }
            temp.push_back({min_num,i});
            temp.push_back({max_num,i});
        }
        sort(temp.begin(),temp.end());
       int ans = 0;
       for(int i=temp.size()-1; i>0; i--)
       {
            if(temp[0].second != temp[i].second)
            {
                ans = max(ans, abs(temp[0].first - temp[i].first));
            }
       }
       int j = temp.size()-1;
       for(int i=0; i<temp.size(); i++)
       {
        if(temp[i].second != temp[j].second)
        {
            ans = max(ans, abs(temp[i].first - temp[j].first));
        }
       }

        return ans;
    }
};