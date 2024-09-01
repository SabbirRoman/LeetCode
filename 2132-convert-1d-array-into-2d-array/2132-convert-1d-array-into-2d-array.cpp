class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        int sz = original.size();
        if(n*m != sz) return ans;
        vector<int> v;
        for(int i=0; i<sz; i++)
        {
            v.push_back(original[i]);

            if((i+1) % n == 0)
            {
                ans.push_back(v);
                v.clear();
            }
        }
        return ans;
    }
};