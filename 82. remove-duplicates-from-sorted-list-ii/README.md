# 82. remove-duplicates-from-sorted-list-ii

[原题链接](https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list-ii/)

淦！没仔细读题就开工了……  
还以为只是删除重复元素，原来是把重复过的元素全部删除……  
（以下是只删除重复的元素代码）

```c++
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;
        ListNode* pRawHead = head;
        while (head->next) {
            if (head->val == head->next->val) head->next = head->next->next;
            head = head->next;
        }
        return pRawHead;
    }
};
```

中等难度题目果然不简单，仿照一 Python 大佬的代码写了一份 C++ 的  
结果出错了……算了，搞一份 Python 的，然后老老实实拿双指针写吧  

```c++
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
    ListNode* deleteDuplicates(ListNode* head) {
        return deleteDuplicates(head, head->val);
    }

    ListNode* deleteDuplicates(ListNode* head, int val) {
        if (!head) return head;
        if ((head && head->val == val) || (head->next && head->val == head->next->val))
            return deleteDuplicates(head->next, head->val);
        head->next = deleteDuplicates(head->next, head->val);
        return head;
    }
};
```

> 2021 - 03 - 25
