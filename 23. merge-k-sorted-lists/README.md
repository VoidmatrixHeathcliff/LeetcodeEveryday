# 23. merge-k-sorted-lists

[原题链接](https://leetcode-cn.com/problems/merge-k-sorted-lists/)

这是一道被我放过去好多天的 `困难` 难度的题目  

但是暴力解法思路简直不要太简单：

+ 首先遍历每个链表将节点指针保存到 vector 中
+ 然后对 vector 中的节点指针进行排序
+ 遍历 vector 生成新链表

**注意处理 vector 为空和链表头结点为空的情况**

> 2021 - 03 - 28
