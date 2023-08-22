class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int  mx_time=neededTime[0], same= neededTime[0];
        int ans=0;
        for(int i=1; i<colors.size(); i++)
        {
            if(colors[i]==colors[i-1])
            {
                mx_time=max(mx_time, neededTime[i]);
                same+=neededTime[i];
            }
            else
            {
                ans+= (same - mx_time);
                same= neededTime[i];
                mx_time =neededTime[i];
            }
        }

        ans+= (same - mx_time);

        return ans;
    }
};