class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>v;
        for(int i=1; i<=n; i++) v.push_back(i);
        k--;
        int length = v.size(), current=0;
        while(length>1)
        {
            current += k;
            current = current % length;
            v.erase(v.begin() + current);

            length = v.size();
        }
        // cout<<length<<endl;
        return v[0];
    }
};