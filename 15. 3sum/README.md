# 15. 3sum

[原题链接](https://leetcode-cn.com/problems/3sum/)

刚要说有手就行，却在动笔时突然想到了昨天被最多装水题超时所支配的恐惧  
想要楞头写下去却在调试时发现自己没有对数组进行去重……  
淦啊，再加上去重就是耶稣来了也得超时啊！  
无语……再次求助大佬们的题解  
在新建本题文件夹时蓦然瞥见 4sum 的代码  
苦不堪言.jpg

以下为 暴力 + 未去重 的（未完成）代码
```c++
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vResults;
        int iLengthNums = nums.size();
        for (int i = 0; i < iLengthNums; i++)
            for (int j = i + 1; j < iLengthNums; j++)
                for (int k = j + 1; k < iLengthNums; k++)
                    if (!(nums[i] + nums[j] + nums[k]))
                        vResults.push_back(vector<int>({nums[i], nums[j], nums[k]}));
        return vResults;
    }
};
```

不得不说，双指针这种遍历方式是针不戳

> 2021 - 03 - 08
