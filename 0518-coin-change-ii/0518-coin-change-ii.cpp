class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int count[amount+1];
        count[0]=1;
        for(int i=1; i<=amount; i++) count[i]=0;
        for(int i=0; i<coins.size(); i++)
        {
            for(int j=coins[i]; j<=amount; j++)
            {
                count[j]+=count[j-coins[i]];
            }
        }

        return count[amount];
    }
};