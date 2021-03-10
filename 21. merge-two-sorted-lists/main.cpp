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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        vector<ListNode*> vNodes;
        while (l1) {
            vNodes.push_back(l1);
            l1 = l1->next;
        }
        while (l2) {
            vNodes.push_back(l2);
            l2 = l2->next;
        }
        sort(vNodes.begin(), vNodes.end(), Sort);
        vNodes.push_back(nullptr);
        for (int i = 0; i < vNodes.size() - 1; i++)
            vNodes[i]->next = vNodes[i + 1];
        return vNodes[0];
    }

private:
    static bool Sort(const ListNode* pNode1, const ListNode* pNode2) {
        return pNode1->val < pNode2->val;
    }
};