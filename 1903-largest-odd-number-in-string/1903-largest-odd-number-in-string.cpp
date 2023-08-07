class Solution {
public:
    string largestOddNumber(string num) {
        
       string str;
        int in=-1;
        for(int i=num.size()-1; i>=0; i--)
        {
            if((num[i]-'0')%2)
            {
                in=i;
                break;
            }
        }
        
        for(int i=0; i<=in; i++)
        {
            str+=num[i];
        }
        
        return str;
    }
};