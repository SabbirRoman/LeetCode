class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<pair<int,int>> people_n_index;
        int n = people.size();
        vector<int> ans(n);
        for(int i=0; i<n; i++)
        {
            people_n_index.push_back({people[i],i});
        }
        sort(people_n_index.begin(), people_n_index.end());

        map<int,int>map1;
        for(int i=0; i<flowers.size(); i++)
        {
            int tmp1= flowers[i][0], tmp2 = flowers[i][1];
            map1[tmp1]++;
            map1[tmp2+1]--;
        }
        int sum = 0, in=0, pos=1e9+1;
        
        for(auto x=map1.begin(); x!=map1.end();  x++)
        {
             sum += x->second;
             pos = x->first;
             int tmp = people_n_index[in].first; 
             if(pos < tmp) continue;
            
            while(pos >= tmp)
            {
               // cout<<tmp<<" "<<pos<<" "<<x.first<<endl;
                int tmp2 = people_n_index[in].second;
                if(tmp==pos) ans[tmp2] = sum;
                else ans[tmp2] = sum - x->second;
                in++;
                if(in == n) break;
                tmp = people_n_index[in].first; 
                
            }
            
            //cout<<tmp<<" "<<tmp2<<" "<<sum<<endl;
            if(in == n) break;
           
            
        }
        while(in < n) {
            int tmp2 = people_n_index[in].second;
                ans[tmp2] = sum;
                in++;
        }

        return ans;
    }
};