/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
  int FindPeak(MountainArray &mountainArr){
       int s=0;
       int e=mountainArr.length()-1;
       int mid=s+(e-s)/2;
       while(s<e){
           if(mountainArr.get(mid)<mountainArr.get(mid+1)){
               s=mid+1;
           }
           else e=mid;
           mid=s+(e-s)/2;
       }
   return mid;
   }
    int binarySearch(MountainArray &mountainArr, int l,int r,int target){
        int mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(mountainArr.get(mid)==target){
                return mid;
            }
            else if(mountainArr.get(mid)<target){
                l=mid+1;
            }
            else r=mid-1;
        }
        return -1;
    }
    int reverseBinarySearch(MountainArray &mountainArr, int l,int r,int target){
        int mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(mountainArr.get(mid)==target){
                return mid;
            }
            else if(mountainArr.get(mid)<target){
                r=mid-1;
            }
            else l=mid+1;
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n=mountainArr.length();
        int peakidx=FindPeak(mountainArr);
        int idx = binarySearch(mountainArr,0,peakidx,target);
        if(idx==-1){
            return reverseBinarySearch(mountainArr,peakidx,n-1,target);
        } 
       return idx; 
    }
};