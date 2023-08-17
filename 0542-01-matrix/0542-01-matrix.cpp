class Solution {
public:

    vector<vector<int>> v;

    void fun( int n,int m, int i,int j)
    {
        if(i+1 <n && v[i+1][j]> v[i][j]+1 )
        {
            v[i+1][j] = v[i][j]+1;
            fun(n,m, i+1, j);
        }
        if(i-1 >=0 && v[i-1][j]> v[i][j]+1 )
        {
            v[i-1][j] = v[i][j]+1;
            fun(n,m, i-1, j);
        }
        if( j+1 <m && v[i][j+1]> v[i][j]+1 )
        {
            v[i][j+1] = v[i][j]+1;
            fun(n,m, i, j+1);
        }
         if(j-1 >=0 && v[i][j-1]> v[i][j]+1  )
        {
            v[i][j-1] = v[i][j]+1;
            fun(n,m, i, j-1);
        }
        return;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size();
       
       vector<pair<int,int>> zero;
       // std::vector<std::vector<int>> v(n);
        for(int i=0; i<n; i++)
        {
            vector<int> p;
            for(int j=0; j<m; j++)
            {
                int tmp=1000000000;
                if(mat[i][j]==0) 
                {
                    tmp=0;
                    zero.push_back(make_pair(i,j));
                }
                p.push_back(tmp);
            }
            v.push_back(p);
        }
        for(int i=0; i<zero.size(); i++)
        {
           fun(n,m,zero[i].first, zero[i].second);
        }
        return v;
    }
};