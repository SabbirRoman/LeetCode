class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        
        int cnt = 0, sz = colors.size();
        for(int i=2; i<sz; i++)
        {
            if(colors[i]==colors[i-2] && colors[i]!=colors[i-1]) cnt++;
        }
        
        if(colors[1]==colors[sz-1] && colors[0]!=colors[1]) cnt++;
        if(colors[0]!=colors[sz-1] && colors[0]==colors[sz-2]) cnt++;
        return cnt;
    }
};