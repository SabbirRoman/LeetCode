class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int alpha[26];
        for(int i =0; i<26; i++) alpha[i] = 10000;

        for(int k=0; k<words.size(); k++)
        {
            int alpha2[26];
        for(int i =0; i<26; i++) alpha2[i] = 0;
        for(int i=0; i<words[k].size(); i++)
        {
            alpha2[words[k][i]-'a']++;
        }
        for(int i =0; i<26; i++) alpha[i] = min(alpha[i], alpha2[i]);

        }
        vector<string> res;
        for(int i=0; i<26; i++)
        {
            while(alpha[i]--)
            {
                char ch='a'+i;
                string s;
                s+=ch;
                res.push_back(s);
            }
        }
        return res;
    }
};