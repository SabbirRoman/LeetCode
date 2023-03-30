class Solution {
public:
    int findComplement(int num) {
        string s;
        while(num)
        {
            if(num&1) s+='1';
            else s+='0';
            num/=2;
        }
        int n=s.size();
        int ans=0;
        long long int tmp=1;
        

        for(int i=0; i<n; i++)
        {
            if(s[i]=='0') ans+=tmp;
            
            tmp*=2;
        }
        
        return ans;
    }
};