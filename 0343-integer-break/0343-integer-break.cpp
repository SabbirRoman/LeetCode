class Solution {
public:
     int fun(int ans2, int base, int power)
     {
         for(int i=0; i<power; i++)
         {
             ans2 *= base;
         }
         return ans2;
     }
    int integerBreak(int n) {
        int ans = 1;
        for(int i=2; ;i++){
            int temp = n/i;
            if(temp <1) break;
            int ans2=1;
           ans2 = fun(ans2,temp, i -(n%i));
          // cout<<ans2<<endl;
           ans2 = fun(ans2, temp+1, n%i);
          // cout<<ans2<<" "<<i<<" "<<temp<<endl;
           ans = max(ans, ans2);
        }
        return ans;
        
    }
};