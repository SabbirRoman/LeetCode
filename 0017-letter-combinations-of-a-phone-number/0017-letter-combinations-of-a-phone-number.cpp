class Solution {
public:
    vector<string> letter;
    vector <string> s;
    
    void make_combo(int in, string tmp, string digits)
    {
        if(in==digits.size())
        {
            letter.push_back(tmp);
            
            return;
        }
        int row= digits[in]-'0';
        
        for(int column=0; column<s[row].size(); column++)
        {
            tmp+=s[row][column];
            
            make_combo(in+1, tmp, digits);
            tmp.pop_back();
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        
        
        s.push_back("index_zero");
        s.push_back("index_one");
        s.push_back("abc"); 
        s.push_back("def");
         s.push_back("ghi");
         s.push_back("jkl");
        s.push_back("mno"); 
        s.push_back("pqrs");
         s.push_back("tuv");
         s.push_back("wxyz");
      /*  for(int i=0; i<s.size(); i++)
        {
            //cout<<s[i];
            for(int j=0; j<s[i].size(); j++)cout<<s[i][j]<<" ";
            cout<<endl;
        }*/
        string tmp;
        int in= 0;
        
        if(digits.size()==0) return letter;
        
        make_combo(in, tmp, digits);
        
       /* for(int i=0; i<letter.size(); i++)
        {
           
            cout<<letter[i]<<endl;
        }*/
        return letter;
        
    }
};