class Solution {
public:
    int numTeams(vector<int>& rating) {
        
        int n= rating.size();
        int ans=0;

        for(int i=0; i<n; i++)
        {
            int min_left=0, max_left=0;
            for(int j=i-1; j>=0; j--)
            {
                if(rating[i]>rating[j]) 
                {
                    min_left++;
                }
                if(rating[i] < rating[j])
                {
                    max_left++;
                }
            }
            int min_right=0, max_right=0;
            for(int j=i+1; j<n; j++)
            {
                if(rating[i]>rating[j]) 
                {
                    min_right++;
                }
                if(rating[i] < rating[j])
                {
                    max_right++;
                }
            }

            ans+=(min_left * max_right)+(max_left*min_right);
        }

        return ans;

    }
};