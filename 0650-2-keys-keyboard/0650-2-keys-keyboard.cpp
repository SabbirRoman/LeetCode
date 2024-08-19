class Solution {
public:
    int minSteps(int n) {
        int arr[n+1];
        arr[1]=0;
        for(int i=2; i<=n; i++)
        {
            arr[i] = i;
            for(int j=2; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    int tmp = i/j;
                    arr[i] = min({arr[i], (i/j) + arr[j], (i/tmp) + arr[tmp]});

                }
            }

            
        }

        return arr[n];
    }
};