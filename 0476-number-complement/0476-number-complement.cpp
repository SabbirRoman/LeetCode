class Solution {
public:
    int findComplement(int num) {
        string s;
        while(num)
        {
            if(num%2==0) s +='1';
            else s +='0';
            num /= 2;
        }
        int ans = 0;
        long long tmp = 1;
        for(int i = 0; i<s.size(); i++)
        {
            
            if(s[i]=='1') ans += tmp;
            tmp *= 2;
        }
        return ans;

    }
};