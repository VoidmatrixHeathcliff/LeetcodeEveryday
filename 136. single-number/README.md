# 136. single-number

[原题链接](https://leetcode-cn.com/problems/single-number/)

确实，不看答案的情况下唯一能想到的就是先排序再遍历  
看了答案才知道这玩意儿也能位运算就 NM 离谱

异或运算有以下三个性质：

+ 任何数和 0 做异或运算，结果仍然是原来的数，即 `a⊕0=a`
+ 任何数和其自身做异或运算，结果是 0 ，即 `a⊕a=0`
+ 异或运算满足交换律和结合律，即 `a⊕b⊕a=b⊕a⊕a=b⊕(a⊕a)=b⊕0=b`

其余题解见：https://leetcode-cn.com/problems/single-number/solution/zhi-chu-xian-yi-ci-de-shu-zi-by-leetcode-solution/

***数学推导真滴神！***

> 2021 - 03 - 29
