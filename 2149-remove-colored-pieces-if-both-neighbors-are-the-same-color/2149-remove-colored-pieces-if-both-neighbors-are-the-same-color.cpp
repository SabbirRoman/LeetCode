class Solution {
public:
    bool winnerOfGame(string colors) {
        int Alice_cnt=0, Bob_cnt=0;
        int len = colors.size();
        for(int i=1; i<len-1; ++i)
        {
            if(colors[i]=='A' && colors[i]==colors[i-1] && colors[i]==colors[i+1])
            {
                Alice_cnt++;
                //colors[i] = '0';
            }
            else if(colors[i]=='B' && colors[i]==colors[i-1] && colors[i]==colors[i+1])
            {
                Bob_cnt++;
                //colors[i] = '0';
            }
        }

        if(Alice_cnt > Bob_cnt) return true;
        else return false;
    }
};