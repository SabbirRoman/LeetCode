class Solution {
public:
    // my solution is O(n)
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size()+nums2.size(), first=0, second=0;
        if(n%2)
        {
            first=(n/2)+1;
            second=first;
        }
        else
        {
            first= n/2;
            second= n/2 +1;
        }
    
        int i=0, j=0, tmp=0, tmp1=0, tmp2=0, tmp3;
        while(1)
        {
           if(i== nums1.size())
           {
                tmp3=nums2[j];
               j++;
           }
           else if(j==nums2.size())
           {
               tmp3=nums1[i];
                i++;
           }
           else if(nums1[i]<nums2[j])
            {
                tmp3=nums1[i];
                i++;
            }
            else
            {
                 tmp3=nums2[j];
                j++;
            }
            tmp++;
            if(tmp==first)
            {
                tmp1=tmp3;
            }
            if(tmp==second)
            {
                tmp2=tmp3;
                break;
            }
            
        }

        double ans= (tmp1+tmp2);
        return ans/2;
    }
};