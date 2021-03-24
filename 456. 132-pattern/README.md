# 456. 132-pattern

[原题链接](https://leetcode-cn.com/problems/132-pattern/)

第一反应是 —— 这是 `中等` 难度的题？这也太简单了吧！  
于是随手写出了下面的代码：

```c++
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int iIndex = 0, iLength = nums.size();
        while (iIndex + 2 < iLength) {
            if (nums[iIndex] < nums[iIndex + 2] && nums[iIndex + 2] < nums[iIndex + 1])
                return true;
            iIndex++;
        }
        return false;
    }
};
```

控制台测试用例通过后我更沾沾自喜了，结果在提交后发现事情没有这么简单  
`i, j, k` 三个下标可能并不是连续的  
正当我脑袋里面除了暴力没有其他解题思路准备看题解的时候  
突然想到了一个优化后的 “暴力解法”

```c++
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int i = 0, iLength = nums.size();
        while (i + 2 < iLength) {
            int iIndexK = i + 1;
            for (int k = iLength - 1; k > i; k--) {
                if (nums[k] <= nums[i]) continue;
                for (int j = i + 1; j < k; j++)
                    if (nums[k] < nums[j]) return true; 
            }
            i++;
        }
        return false;
    }
};
```

写完也改完了才意识到似乎并没有优化多少  
一提交，果然超出时间限制了……  
中等难度确实有挑战性，去看下大佬们的题解吧  
有种预感这题目似乎是一种类型，学会后应该不难做

**单调栈** WDNMD，看了一会走神，又回来看，如此往复一上午没了  
这玩意不是人做的……（只看代码是真滴难理解，确实得配合题解讲述）  
那个在单调栈里面用二分法的解法我寻思应该不是现在的我能掌握的东西  
`我合不上.jpg`

> 2021 - 03 - 24
