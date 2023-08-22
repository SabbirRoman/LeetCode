class Solution {
public:
    int numberOfWays(int n, int x) {
        
        vector<int> v;
        for(int i=1;  ; i++)
        {
            int tmp= pow(i,x);
            if(tmp>n) break;
             v.push_back(tmp);
        }
        
        int a[n+1];
        for(int i=0; i<=n; i++)
        {
            a[i]=0;
        }
        a[0]=1;
        int mod=1e9+7;
        for(int i=0; i<v.size(); i++)
        {
            for(int j=n; j>=v[i]; j--)
            {
                a[j]= (a[j]+a[j-v[i]])%mod;
            }
        }
        
        return a[n];
    }
};