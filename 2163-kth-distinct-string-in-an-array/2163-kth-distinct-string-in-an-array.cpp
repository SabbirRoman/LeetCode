class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>my_map;
        for(int i=0; i<arr.size(); i++)
        {
            my_map[arr[i]]++;
        }
        int cnt = 0;
         string s;
        for(int i=0; i<arr.size(); i++)
        {
            if(my_map[arr[i]]==1) cnt++;
            if(cnt==k){

             s=arr[i];
             break;
            }
            
        }
       return s;
    }
};