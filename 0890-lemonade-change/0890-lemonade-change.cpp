class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five_d = 0, ten_d = 0, twenty_d = 0;
        for(int i =0 ; i<bills.size(); i++)
        {
            if(bills[i] == 20)
            {
                twenty_d ++;
                if(ten_d > 0)
                {
                    ten_d --;
                    if(five_d > 0) five_d--;
                    else return false;
                }
                else if (five_d >= 3)
                {
                    five_d -=3;
                }
                else return false;
            }
            else if(bills[i] == 10)
            {
                ten_d++;
                if(five_d > 0) five_d --;
                else return false;

            }
            else five_d++;
        }

        return true;
    }
};