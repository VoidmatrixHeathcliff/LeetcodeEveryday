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
        ListNode* pDummy = new ListNode(0, head), * pFirst = head, * pSecond = pDummy;
        for (int i = 0; i < n; i++) pFirst = pFirst->next;
        while (pFirst) pFirst = pFirst->next, pSecond = pSecond->next;
        pSecond->next = pSecond->next->next;
        ListNode* pResult = pDummy->next;
        delete(pDummy);
        return pResult;
    }
};