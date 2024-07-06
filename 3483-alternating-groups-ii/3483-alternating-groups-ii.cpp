class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        vector<int> v=colors;
        
        
         int sz = colors.size(),  i=0,j=0, ans=0, cnt=1;
         for( i=0; i<sz; i++) v.push_back(colors[i]);
        for(i=0;i<sz && j<sz+k-2 ;j++)
        {
            // cout<<j<<" kdkj"<<endl;
            if(colors[j%sz]!=colors[(j+1)%sz]) cnt++;
            else
            {
                if(cnt>=k) ans+=(cnt-k+1);
                cnt=1;
                i=j+1;
            }
        }
        if(cnt>=k) ans +=(cnt-k+1);
        return ans;
    }
};