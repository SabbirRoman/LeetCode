class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
       multiset<int> mul;
 for(int i=0; i<k; i++)
 {
    mul.insert(nums[i]);
 }
 vector<int>ans;
  multiset<int, greater<int> >::iterator itr; 
  itr=mul.end();
  itr--;
  int index=0,tmp= *itr;
  ans.push_back(tmp);
  for(int i=k; i<n; i++)
  {
      mul.erase(mul.find(nums[index]));
      mul.insert(nums[i]);
      itr=mul.end();
  itr--;
  tmp= *itr;
  ans.push_back(tmp);
  index++;
  }

  return ans;
}
};