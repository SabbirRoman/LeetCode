class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<vector<int>> graph(n+1);
        vector<int> max_time(n+1,0);
        for(auto &r:relations){
            // cout << "start : " << r[0] <<" end : " << r[1] <<endl;
            graph[r[0]].push_back(r[1]);
        }
        for(int i=0;i<n;i++){
            dfs(i+1,graph,time,max_time);
        }
        return *max_element(max_time.begin(),max_time.end());
    }
private:
    int dfs(int src,vector<vector<int>>& graph,vector<int>& time,vector<int>&max_time){
        if(max_time[src]!=0){
            return max_time[src];
        }
        int res=time[src-1];
        
        for(auto n:graph[src]){
            res=max(res,dfs(n,graph,time,max_time)+time[src-1]);
        }
        
        max_time[src]=res;
        return res;
    }
};