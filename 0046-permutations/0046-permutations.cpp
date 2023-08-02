class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector< vector<int>>ans;
        sort(nums.begin(),nums.end());
        do{
            vector<int> v;
            
            for(int i=0; i<nums.size(); i++)
            {
                v.push_back(nums[i]);
                //cout<<nums[i]<<" ";
            }
            //cout<<endl;
            
            ans.push_back(v);
           
        }while(next_permutation(nums.begin(),nums.end()));
        
        
        return ans;
    }
};