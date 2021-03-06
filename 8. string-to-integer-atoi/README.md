# 8. string-to-integer-atoi

[原题链接](https://leetcode-cn.com/problems/string-to-integer-atoi/)

我直接不讲武德  
你要实现 `atoi` 并且控制 int 类型溢出的情况  
那我就直接把 `atol` 拿来用了，反正你的测试用例不会溢出（XD  

稍后再研究一下常规算法（但愿能学会）

看完了 [大佬的解题](https://leetcode-cn.com/problems/string-to-integer-atoi/solution/8-zi-fu-chuan-zhuan-huan-zheng-shu-c-by-o9192/)  
对于极限压行有了更精辟的理解（XD  
其实更重要的是对 int 溢出的预处理操作  
`main_1.cpp` 中是对大佬解题算法的优化（指没有多次调用 `string.size()` 以及避免了使用 `isdigit()` 函数）

> 2021 - 03 - 06
