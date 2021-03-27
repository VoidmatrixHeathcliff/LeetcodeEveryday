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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!k || !head) return head;
        ListNode* pRawHead = head;
        vector<ListNode*> vPListNode;
        while (head) {
            vPListNode.push_back(head);
            head = head->next;
        }
        int iLength = vPListNode.size();
        if (!(k % iLength)) return pRawHead;
        vPListNode[iLength - 1]->next = pRawHead;
        vPListNode[iLength - k % iLength - 1]->next = nullptr;
        return vPListNode[iLength - k % iLength];
    }
};