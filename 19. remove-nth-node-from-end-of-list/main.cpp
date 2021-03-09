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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* aryNodes[30] = { nullptr };
        int iNumNode = 0;
        while (head) {
            aryNodes[iNumNode] = head;
            head = head->next;
            iNumNode++;
        }
        if (iNumNode == n) return aryNodes[1];
        aryNodes[iNumNode - n - 1]->next = aryNodes[iNumNode - n + 1];
        return aryNodes[0];
    }
};