class Solution {
public:
    bool check_square(int tmp2)
    {
        int root = sqrt(tmp2);
        for(long long int i=root; i*i<=tmp2; i++)
        {
            if(i*i == tmp2 ) return true;
        }
        return false;
    }
    bool judgeSquareSum(int c) {
       
        long long int tmp = 0;
        while((tmp*tmp)<=c)
        {
            int tmp2 = c -(tmp*tmp);
            if(check_square(tmp2)) return true;
            tmp++;
        }
        
        
        return false;
    }
};