class Solution {
public:
    string reverseWords(string s) {
        string str, ans;
        int len = s.size();
        for(int i=0; i<len; ++i)
        {
            if(s[i]==' ')
            {
                for(int j=str.size()-1; j>=0; j--) ans+=str[j];
                ans+=' ';
                str.clear();
            }
            else str+=s[i];
        }
        for(int j=str.size()-1; j>=0; j--) ans+=str[j];

        return ans;
    }
};