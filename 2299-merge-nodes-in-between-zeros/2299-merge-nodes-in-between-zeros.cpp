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
    ListNode* mergeNodes(ListNode* head) {
            // Create a dummy node for the new list
        ListNode* dummy = new ListNode();
        ListNode* newList = dummy;
        
        // Traverse the original list
        ListNode* current = head;
        int sum = 0;
        while (current != nullptr) {
            if (current->val == 0) {
                // Add non-zero value to the new list
                 if(sum)
                {
                    newList->next = new ListNode(sum);
                    newList = newList->next;
                }
                sum = 0;
            }
            else
            {
                sum += current->val;
            }
            current = current->next;
        }
        if(sum)
        {
            newList->next = new ListNode(sum);
            newList = newList->next;
        }
        // Return the head of the new list 
        return dummy->next;
    }
};