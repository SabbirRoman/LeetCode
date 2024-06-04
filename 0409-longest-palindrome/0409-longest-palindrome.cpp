class Solution {
public:
    int longestPalindrome(string s) {
        sort(s.begin(),s.end());
        int longest_p = 0, cnt = 1, special = 0;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i-1]==s[i]) cnt++;
            else
            {
                // cout<<cnt<<" "<<i<<endl;
                if(cnt%2) 
                {
                    special = 1;
                    cnt--;
                }
                longest_p += cnt;
                cnt = 1;
            }
        }
        if(cnt%2) 
        {
            special = 1;
            cnt--;
        }
        longest_p += cnt + special;

        return longest_p;
    }
};