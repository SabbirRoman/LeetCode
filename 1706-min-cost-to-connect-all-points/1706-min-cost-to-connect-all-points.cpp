class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        int n = points.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        vector<bool> visited(n, false);
        int ans = 0;

        minHeap.push({0,0});

        while(n)
        {
            auto next = minHeap.top();
            minHeap.pop();
            if(visited[next.second])
                continue;
            ans += next.first;
            visited[next.second] = true;
            n--;

            for(int i = 0; i < points.size(); i++)
            {
                if(!visited[i])
                    minHeap.push( {abs(points[next.second][0] - points[i][0]) + abs(points[next.second][1] - points[i][1]), i} );
            }

        }

        return ans;
    }
};