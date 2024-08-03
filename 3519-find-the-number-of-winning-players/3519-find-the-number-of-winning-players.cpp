class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        sort(pick.begin(),pick.end());
        int ans = 0,cnt=1;
        map<int,int>mp;
        if(pick[0][0]==0) ans++,mp[pick[0][0]]++;
        for(int i=1; i<pick.size(); i++)
        {
            if(pick[i-1][0]==0) continue;
            if(pick[i-1][0]==pick[i][0])
            {
            if(pick[i-1][1]==pick[i][1]) cnt++;
            else
            {
               
                cnt=1;
            }
            }
            else 
        {
            //   cout<<pick[i-1][0]<<" "<<ans<<" "<<cnt<<endl;
                
            cnt = 1;
        }
        if(pick[i-1][0] < cnt && mp[pick[i-1][0]]==0) ans++,mp[pick[i-1][0]]++;

        }
        if(mp[pick[pick.size()-1][0]]==0 && pick[pick.size()-1][0] < cnt) ans++;
        return ans;

    }
};