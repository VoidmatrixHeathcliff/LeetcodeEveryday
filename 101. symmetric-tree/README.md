# 101. symmetric-tree

[原题链接](https://leetcode-cn.com/problems/symmetric-tree/)

笑死，极限压行：

```c++
return !pLeft && !pRight ? true : (!pLeft || !pRight ? false : pLeft->val == pRight->val && check(pLeft->left, pRight->right) && check(pLeft->right, pRight->left));
```

> 2021 - 03 - 29
