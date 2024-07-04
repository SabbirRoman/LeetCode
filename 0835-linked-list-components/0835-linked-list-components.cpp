/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        // Create an unordered_map to store the presence of each number in nums
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        int ans = 0;     // To count the number of connected components
        bool start = false;  // To indicate whether we are in a component

        // Traverse the linked list
        while (head != nullptr) {
            int temp = head->val;  // Get the current node's value

            // Check if the current node's value is in the map
            if (mp[temp] > 0) {
                if (!start) ans++;  // If not in a component, increment the count
                start = true;  // Mark that we are in a component
            } else {
                start = false;  // If the value is not in the map, end the current component
            }

            head = head->next;  // Move to the next node
        }

        return ans;  // Return the number of connected components
    }
};