class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> a,b;
        int tmp=0, cnt_one=0;
        for(int i=0; i<n; i++)
        {
            a.push_back(tmp+cnt_one);
            tmp=tmp+cnt_one;
            if(boxes[i]=='1') cnt_one++;

        }

        tmp=0, cnt_one=0;
        for(int i=n-1; i>=0; i--)
        {
            b.push_back(tmp+cnt_one);
            tmp=tmp+cnt_one;
            if(boxes[i]=='1') cnt_one++;
        }
        // vector "b" store the results in reverse order
       for(int i=0; i<n; i++)
        {
           a[i]+=b[n-(i+1)];
        }

        return a;
    }
};