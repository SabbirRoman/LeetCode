class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size(),tmp=0;

        for(int i=0; i<t.size() && tmp<s.size(); i++)
        {
            if(s[tmp]==t[i]) tmp++;
        }

        if(tmp==s.size() ) return 1;
        else return 0;
    }
};