/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int iNum = 0;
        while (head && iNum <= 100000) {
            iNum++;
            head = head->next;
        }
        return iNum > 100000;
    }
};