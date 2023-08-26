class Solution {
public:
static bool sortbysec( vector<int> a, vector<int> b) {
return a[1]<b[1];
}


    int findLongestChain(vector<vector<int>>& pairs) {
        
        int n=pairs.size();
        
        
        sort(pairs.begin(), pairs.end(), sortbysec);
        int ans=1;
        int tmp=pairs[0][1];
        for(int i=1; i<n; i++)
        {
            if(tmp<pairs[i][0])
            {
                ans++;
                tmp=pairs[i][1];
            }
        }

        return ans;
    }
};