class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int n=obstacleGrid.size(), m=obstacleGrid[0].size();
        
        for(int i=0; i<obstacleGrid.size(); i++)
        {
            for(int j=0; j<obstacleGrid[i].size(); j++)
            {
                if(i==0 && j==0)
                {
                    if(obstacleGrid[i][j]==0) obstacleGrid[i][j]=1;
                    else obstacleGrid[i][j]=0;
                }
                else if(i==0)
                {
                    if(obstacleGrid[i][j]==0) obstacleGrid[i][j]=obstacleGrid[i][j-1];
                     else obstacleGrid[i][j]=0;
                }
                else if(j==0)
                {
                    if(obstacleGrid[i][j]==0) obstacleGrid[i][j]=obstacleGrid[i-1][j];
                     else obstacleGrid[i][j]=0;
                }
                else 
                {
                    if(obstacleGrid[i][j]==0) obstacleGrid[i][j]=obstacleGrid[i][j-1]+obstacleGrid[i-1][j];
                     else obstacleGrid[i][j]=0;
                }
            }
        }

        return obstacleGrid[n-1][m-1];
    }
};