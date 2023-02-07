class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size(), m=matrix[0].size();
        vector<int> v[n+1];
        for(int i=0; i<=m; i++) v[0].push_back(0);
        
        for(int i=0; i<n; i++)
        {
            v[i+1].push_back(0);
            for(int j=0;  j<m; j++)
            {
                int tm;
                if(matrix[i][j]=='1') tm=1;
                else tm=0;
                tm+=v[i+1][j]+v[i][j+1]-v[i][j];
                v[i+1].push_back(tm);
            }
        }
        int ans=0;
         for(int i=1; i<=n; i++)
        {
           
            for(int j=1;  j<=m; j++)
            {
              while(1)
              {
                  int x=i+ans, y=j+ans;
                if(x>n || y>m) break;
                  int tmp=v[x][y] - v[i-1][y] - v[x][j-1] + v[i-1][j-1];
                  if((ans+1)*(ans+1)==tmp) ans++;
                  else break;
                  
              }
                
                 
            }
             
        }
        return ans*ans;
        
        
    }
};