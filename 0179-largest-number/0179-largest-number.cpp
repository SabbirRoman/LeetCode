class compare{
  public:
        bool operator()(int a, int b){
            string s1 = to_string(a), s2=to_string(b);
            return s1+s2 > s2+s1;
        }
};
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
           sort(nums.begin(), nums.end(), compare());
        string ans;
        for(auto x: nums)
        {
            ans+= to_string(x);
           
        }
        if(ans[0]=='0') return "0";
      return   ans;
    }
};