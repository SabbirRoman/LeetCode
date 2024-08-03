class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int row = 0, col = 0;
        int n = grid.size(), m=grid[0].size();

        for(int i=0; i<(n+1)/2; i++)
        {
            for(int j=0; j<(m+1)/2;j++)
            {
                int cnt=0;
                if(grid[i][j]!=grid[i][m-(j+1)])row++;
                if(i!=(n-(i+1)) && grid[n-(i+1)][j]!=grid[n-(i+1)][m-(j+1)])row++;

                if(grid[i][j]!=grid[n-(i+1)][j])col++;
                if(j!=(m-(j+1)) && grid[i][m-(j+1)]!=grid[n-(i+1)][m-(j+1)])col++;
            }
        }
        return min(row,col);
    }
};