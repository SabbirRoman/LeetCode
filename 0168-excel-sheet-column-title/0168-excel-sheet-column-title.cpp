class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ans;

        while(columnNumber)
        {
            int tmp = columnNumber%26;
             columnNumber/= 26;
           // cout<<tmp<<" "<<columnNumber<<endl;
            if(tmp==0) 
            {
                tmp=26;
                columnNumber--;
            }
            tmp--;
            ans+=('A'+tmp);
            
           
           
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};