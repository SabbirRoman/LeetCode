class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int i_drink=0, empty=0 ;
        i_drink += numBottles;
        // empty += numBottles;
        while(numBottles)
        {
            // cout<<numBottles<<" "<<i_drink<<" "<<empty<<endl;
            
            empty +=numBottles;
            numBottles = (empty/numExchange);
            empty -= (numBottles*numExchange);
            i_drink += numBottles;
        }
        return i_drink;
    }
};