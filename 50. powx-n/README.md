# 50. powx-n

[原题链接](https://leetcode-cn.com/problems/powx-n/)

果然中等难度的题目没有那么简单……  
我歇逼了，想破脑子顶多能搞出下面的代码：

```c++
class Solution {
public:
    double myPow(double x, int n) {
        if (x == 0) return 0;
        if (x == 1 || n == 0) return 1;
        double dResult = 1;
        for (int i = 0; i < abs(n); i++)
            dResult *= x;
        return n > 0 ? dResult : 1.0 / dResult;    
    }
};
```

先去不讲武德一次，然后再去认真研究题解吧……

好家伙，我直接调用 `pow()` 通过了后才发现这不是每日一题……

> 2021 - 03 - 27
