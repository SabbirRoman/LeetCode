class Solution {
public:
    int findDuplicate(vector<int>& nums) {
          int n = nums.size();

        int right= n-1, left=0, mid;
        while(left <= right)
        {
            mid = left + (right - left)/2;
           int cnt = 0;

            for(int x: nums)
            {
                if(x <= mid) cnt++;
            }
        //cout<<right<<" "<<left<<" "<<mid<<" "<<cnt<<endl;
            if(cnt <= mid) left = mid+1;
            else right = mid -1;
        }
        return left;
    }
};