class Solution {
public:
    int minimumDeletions(string s) {
        vector<int> count_del;
        int N = s.size(), cnt = 0;
        for(int i=0; i<N; i++)
        {
            if(s[i]=='b') cnt++;
            count_del.push_back(cnt);
        }
        int ans = count_del[N-1];
        cnt = 0;
        for(int i=N-1; i>0;  i--)
        {
            if(s[i]=='a') cnt++;
            ans = min(ans,cnt+count_del[i-1]);
        }
        if(s[0]=='a') cnt++;
        ans= min(ans,cnt);
        return ans;
    }
};