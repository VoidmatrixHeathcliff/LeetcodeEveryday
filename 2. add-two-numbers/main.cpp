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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* pHead = nullptr, *pTail = nullptr;
        int iCarry = 0;
        while (l1 || l2) {
            int iNum_1 = l1 ? l1->val : 0, iNum_2 = l2 ? l2->val : 0;
            int iSum = iNum_1 + iNum_2 + iCarry;
            if (!pHead) {
                pHead = pTail = new ListNode(iSum % 10);
            } else {
                pTail->next = new ListNode(iSum % 10);
                pTail = pTail->next;
            }
            iCarry = iSum / 10;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        if (iCarry) pTail->next = new ListNode(iCarry);
        return pHead;
    }
};