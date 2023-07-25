class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int ans=0, left=0, right=arr.size()-1;
        
        while(left<right)
        {
            if(right-left<=1) break;
            int mid=(right+left)/2;
            
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                ans=mid;
                break;
            }
            if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
            {
               if(arr[mid+1]>arr[ans]) ans=mid+1;
                left=mid+1;
            }
            if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1])
            {
                if(arr[mid-1]>arr[ans]) ans=mid-1;
                right=mid-1;
            }
        }
        
        return ans;
        
        
    }
};