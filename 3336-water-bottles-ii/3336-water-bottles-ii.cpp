class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans =0,tmp2=0;
        while(1)
        {
         
            // cout<<numBottles<<" "<<numExchange<<endl;
            
            if(numBottles>=numExchange) 
            {
                numBottles -= numExchange;
                ans+= numExchange;
                numBottles++;
                numExchange++;
            }
           else
           {
               break;
           }

        }
        return ans+numBottles;
    }
};