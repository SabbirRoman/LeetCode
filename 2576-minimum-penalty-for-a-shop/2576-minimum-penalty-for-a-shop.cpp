class Solution {
public:
    int bestClosingTime(string customers) {
        int total_penalty=0, closing_hour=0;
        int n=customers.size();

        for(int i=0; i<n; i++)
        {
            if(customers[i]=='Y') total_penalty++;
        }
        int count_y=0, min_penalty= total_penalty;
        for(int i=0; i<n; i++)
        {
            if(customers[i]=='Y') count_y++;
            int current_penalty= (i + 1 - count_y) + (total_penalty- count_y);
            if(current_penalty < min_penalty)
            {
                min_penalty = current_penalty;
                closing_hour=i+1;
            }
        }

        return closing_hour;
    }
};