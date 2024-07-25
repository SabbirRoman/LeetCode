class Solution {
public:
    // Do it using a sorting algorithm
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums;
    }
};