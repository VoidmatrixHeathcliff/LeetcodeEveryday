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
    bool isPalindrome(ListNode* head) {
        if (!head) return head;
        vector<ListNode*> vPNodes;
        while (head) {
            vPNodes.push_back(head);
            head = head->next;
        }
        int iLength = vPNodes.size();
        for(int i = 0; i < iLength / 2; i++)
            if (vPNodes[i]->val != vPNodes[iLength - i - 1]->val)
                return false;
        return true;
    }
};