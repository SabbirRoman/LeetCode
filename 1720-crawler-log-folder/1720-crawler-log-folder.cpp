class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count_steps = 0;
        for(int i=0; i<logs.size(); i++)
        {
            if(logs[i][0]!='.') count_steps++;
            else if(logs[i][1]=='.')count_steps--;

             count_steps = max(0,count_steps);
        }
       
        return count_steps;
    }
};