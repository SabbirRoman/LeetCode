class Solution {
public:
    int candy(vector<int>& ratings) {
        int n= ratings.size();
        int count[n];
        count[0] = 1;
        for(int i=1; i<n; i++)
        {
            if(ratings[i-1]<ratings[i])
            {
                count[i] = count[i-1]+1;
            }
            else
            {
                count[i] = 1;
            }
        }

        for(int i=n-2; i>=0; i--)
        {
            if(ratings[i] > ratings[i+1])
            {
                count[i] =max( count[i], count[i+1]+1 );
            }
        }
        int total_candy = 0;
        for(int i=0; i<n; i++) total_candy+=count[i];

        return total_candy;
    }
};