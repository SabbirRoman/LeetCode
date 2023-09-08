class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i=0; i<numRows; i++)
        {
            vector<int> tmp;
            tmp.push_back(1);
            if(i>0)
            {
                for(int j=1; j<v[i-1].size(); j++ )
                {
                    tmp.push_back(v[i-1][j-1] + v[i-1][j]);
                }

                tmp.push_back(1);
            }
            v.push_back(tmp);
        }

        return v;
    }
};