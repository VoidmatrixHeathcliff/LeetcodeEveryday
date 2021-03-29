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
    ListNode* reverseList(ListNode* head) {
        if (!head) return head;
        vector<ListNode*> vPNodes;
        while(head) {
            vPNodes.push_back(head);
            head = head->next;
        }
        for (int i = vPNodes.size() - 1; i > 0; i--)
            vPNodes[i]->next = vPNodes[i - 1];
        vPNodes[0]->next = nullptr;
        return vPNodes[vPNodes.size() - 1];
    }
};