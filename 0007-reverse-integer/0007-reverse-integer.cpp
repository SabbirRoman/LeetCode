class Solution {
public:
    int reverse(int x) {
        string s= to_string(x);
        string ans;
        int j;
        if(s[0]=='-') ans+=s[0];
        for(int i=s.size()-1 ; i>=0; i--)
        {
            j=i;
            if(s[i]!='0')
            { 
                break;
            }
        }


        for(int i=j; i>=0; i--)
        {
            if(s[i]!='-') ans+=s[i];
        }
        stringstream geek;
 
    // inserting string s in geek stream
    geek << ans;
 
    // The object has the value 12345
    // and stream it to the integer x
     int xx = 0;
    geek >> xx;
    if(xx==INT_MAX || xx==INT_MIN) xx=0;
        return xx;
    }
};