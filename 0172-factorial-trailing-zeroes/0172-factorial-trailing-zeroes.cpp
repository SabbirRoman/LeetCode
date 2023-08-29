class Solution {
public:
    int trailingZeroes(int n) {
        int count_five=0;
        for(int i=1; i<=n; i++)
        {
            int tmp=i;
            while(tmp%5==0)
            {
                count_five++;
                tmp/=5;
            }
        }

        return count_five;
    }
};