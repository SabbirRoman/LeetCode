class Solution {
public:
    int appendCharacters(string s, string t) {
        int size = s.size();
        int in = 0;
        for(int i=0; i<size; i++)
        {
            if(in == t.size()) break;
            if(s[i] == t[in]) in++;
        }
        int ans = t.size() - in;
        return ans;
    }
};