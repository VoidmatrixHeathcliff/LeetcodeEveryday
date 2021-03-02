# 2. add-two-numbers

[原题链接](https://leetcode-cn.com/problems/add-two-numbers/)

没有注意到节点数在 `[1, 100]` 这个条件吃了大亏  
也就是说如果先使用整数或浮点数存储输入链表的结果  
那么在临界测试时必然会出现溢出的情况  
也就是下面这部分代码

```C++
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
        int iValue_1 = 0, iValue_2 = 0, iTimes = 0, iResult = 0;
        while (l1) {
            iValue_1 += l1->val * pow(10, iTimes);
            l1 = l1->next;
            iTimes++;
        }
        iTimes = 0;
        while (l2) {
            iValue_2 += l2->val * pow(10, iTimes);
            l2 = l2->next;
            iTimes++;
        }
        iResult = iValue_1 + iValue_2;
        ListNode* pResult = new ListNode(iResult % 10), *pTail = pResult;
        if (iResult < 10) return pResult;
        iResult = iResult / 10;
        while (iResult) {
            ListNode* pNewNode = new ListNode(iResult % 10);
            pTail->next = pNewNode;
            pTail = pNewNode;
            iResult = iResult / 10;
        }
        return pResult;
    }
};
```

没办法，只好换一种解题思路  
根据官方题解，可以使用逐位相加的方法来避免溢出的情况  
（突然想到，拿Python做或许就不会出现这种情况了）

> 2021 - 03 - 02