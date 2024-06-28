class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        map<int,int>freq;
        for(int i=0; i<roads.size(); i++)
        {
            int a = roads[i][0], b = roads[i][1];
            freq[a]++;
            freq[b]++;
        }
        vector<pair<long,long>> v;
        for(auto it = freq.rbegin(); it != freq.rend(); ++it) {
            int a = it->second, b = it->first;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(), v.end());
        long long ans =0;
        for(int i=v.size()-1; i>=0; i--)
        {
            ans += (v[i].first * n);
            n--;
        }
        return ans;

    }
};