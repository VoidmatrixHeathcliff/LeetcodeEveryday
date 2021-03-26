# 53. maximum-subarray

[原题链接](https://leetcode-cn.com/problems/maximum-subarray/)

我竟然没看到 **连续** 子数组，写了一版没用的代码： 

```c++
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int iResult = 0;
        sort(nums.begin(), nums.end());
        if (nums[nums.size() - 1] <= 0) return nums[nums.size() - 1];
        for (int num : nums)
            if (num > 0) iResult += num; else break;
        return iResult;
    }
};
```

懂了，这就去暴力！  

好家伙这个不能用暴力！  
不过发现了一版 [神仙代码](https://leetcode-cn.com/problems/maximum-subarray/solution/hua-jie-suan-fa-53-zui-da-zi-xu-he-by-guanpengchn/)，这就去抄！

淦！忍不住试了一下暴力，果然超出时间限制了……  

```c++
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int iLength = nums.size(), iResult = nums[0];
        for (int length = 1; length <= iLength; length++) {
            for (int i = 0; i <= iLength - length; i++) {
                int iSum = 0;
                for (int j = i; j < i + length; j++)
                    iSum += nums[j];
                iResult = max(iResult, iSum);
            }
        }
        return iResult;
    }
};
```

等会儿……这玩意是简单难度？我才意识到……

> 2021 - 03 - 26
