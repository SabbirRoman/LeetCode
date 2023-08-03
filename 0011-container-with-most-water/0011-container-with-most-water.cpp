class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right= height.size()-1, ans=0;
        
        while(left<right)
        {
            if(ans<(right-left)*(min(height[left],height[right])))
            {
                ans= (right-left)*(min(height[left], height[right]));
              
            }
            
            if(height[right]>height[left]) left++;
            else right--;
        }
        
        return ans;
    }
};