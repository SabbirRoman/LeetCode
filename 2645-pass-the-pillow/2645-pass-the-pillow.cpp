class Solution {
public:
    int passThePillow(int n, int time) {
        int tmp = time/(n-1), last_person;
        if(tmp%2)
        {
            last_person = n-(time%(n-1));
        }
        else
        {
            last_person = (time%(n-1))+1;
        }
        return last_person;
    }
};