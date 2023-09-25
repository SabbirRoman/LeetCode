class Solution {
public:
    char findTheDifference(string s, string t) {
        int count[26];
        for(int i=0; i<26; i++) count[i] = 0;

        for(int i=0; i<t.size(); i++) count[t[i] - 'a']++;
        for(int i=0; i<s.size(); i++) count[s[i] - 'a']--;

        char ch='a';
        for(int i=0; i<26; i++)
        {
            if(count[i]>0)
            {
                //cout<<i<<endl;
                ch += i;
            }
        }

        return ch;
    }
};