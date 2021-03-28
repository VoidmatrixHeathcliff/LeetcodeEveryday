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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (!lists.size()) return nullptr;
        vector<ListNode*> vPNodes;
        for (ListNode* list : lists) {
            if (!list) continue;
            while(list) {
                vPNodes.push_back(list);
                list = list->next;
            }
        }
        if (!vPNodes.size()) return nullptr;
        sort(vPNodes.begin(), vPNodes.end(), [&](ListNode* pNode1, ListNode* pNode2) {return pNode1->val < pNode2->val;});
        int iLength = vPNodes.size();
        for (int i = 0; i < iLength - 1; i++)
            vPNodes[i]->next = vPNodes[i + 1];
        vPNodes[iLength - 1]->next = nullptr;
        return vPNodes[0];
    }
};