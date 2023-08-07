class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n= matrix.size(), m=matrix[0].size(); // n= no of row and m= no of column
        
        int left=0, right=((n-1)*m)+(m-1);
        bool result=false;
        
        while(left<=right)
        {
            int mid= (left+right)/2;
            
            int row= mid/m, col=mid%m;
            
            if(matrix[row][col]==target)
            {
                result= true;
                break;
            }
            else if(matrix[row][col]> target)
            {
                right= mid-1;
            }
            else
            {
                left=mid+1;
            }
            
        }
        
        return result;
    }
};