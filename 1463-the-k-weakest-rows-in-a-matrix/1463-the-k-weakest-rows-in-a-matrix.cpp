class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        vector<pair<int,int>>vp;
        for(int i=0; i<n; i++)
        {
            int tmp=0;
            for(int j=0; j<mat[i].size(); j++)
            {
                if(mat[i][j]==1) tmp++;
                else break;
            }
            vp.push_back({tmp,i});
        }
        sort(vp.begin(),vp.end());
        vector<int>ans;
        for(int i=0; i<k; i++)ans.push_back(vp[i].second);

        return ans;
    }
};