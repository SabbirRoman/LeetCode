class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int>mp;
        int N=target.size();
        for(int i=0; i<N; i++)
        {
            mp[target[i]]++;
        }
        for(int i=0; i<N; i++)
        {
            mp[arr[i]]--;
            if(mp[arr[i]]<0) return false;
        }
        return true;
    }
};