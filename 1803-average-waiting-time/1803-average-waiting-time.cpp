class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int sz = customers.size(), current_time=0;
        long long total_time =0;
        // current_time = customers[0][0];
        for(int i=0; i<sz; i++)
        {
            current_time = max(current_time,customers[i][0]);
            current_time += customers[i][1];
            total_time += (current_time - customers[i][0]);
        }
        double avg_waiting_time = total_time;
        avg_waiting_time /=sz;
        return avg_waiting_time;

    }
};