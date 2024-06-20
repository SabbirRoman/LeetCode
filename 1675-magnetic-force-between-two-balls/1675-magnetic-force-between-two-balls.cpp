class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int sz = position.size();
        int ans = 1,left=1,right=position[sz-1]-position[0];

        while(left<=right)
        {
            int mid = (right+left)/2;
            int cnt = 1,tmp = mid+position[0];
            for(int i=1; i<sz; i++)
            {
                if(position[i]>=tmp){
                    tmp = position[i]+mid;
                    cnt++;
                }
                if(cnt==m) break;
            }
            if(cnt==m){
                ans = max(ans,mid);
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
        }
        return ans;

    }
};