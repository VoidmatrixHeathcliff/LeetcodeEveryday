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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(-1, head);
        ListNode* slow = nullptr, *fast = dummy;
        while (fast) {
            slow = fast, fast = fast->next;
            while (fast && fast->next && fast->val == fast->next->val) {
                int repeat_num = fast->val;
                while (fast && fast->val == repeat_num)
                    fast = fast->next;
                slow->next = fast;
            }
        }
        return dummy->next;
    }
};