# 11. container-with-most-water

[原题链接](https://leetcode-cn.com/problems/container-with-most-water/)

刚拿过来便被那个 `"你不能倾斜容器"` 的说明给笑到了  
哈哈哈哈哈倾斜容器来盛更多的水，这是碳基生物能想到的吗（指在算法题中  
但是开始思考的时候才发现，淦，这才是难度增加的关键  

但是也不是很难，于是动手写了第一版代码  

```c++
class Solution {
public:
    int maxArea(vector<int>& height) {
        int iMaxArea = 0, iLengthPoints = height.size();
        for (int i = 0; i < iLengthPoints; i++) {
            for (int j = i + 1; j < iLengthPoints; j++) {
                int _iArea = (j - i) * min(height[i], height[j]);
                if (_iArea > iMaxArea) iMaxArea = _iArea;
            }
        }
        return iMaxArea;
    }
};
```

没有什么是暴力解决不了的  
如果有的话，那就是……  
超时了 NMD ！  
我直接裂开去查题解  
`双指针算法`  
终于搞定了，太淦了……

> 2021 - 03 - 07
