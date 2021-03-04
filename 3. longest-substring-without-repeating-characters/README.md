# 3. longest-substring-without-repeating-characters

[原题链接](https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/)

今日感悟：***官方题解就是香***

什么？我竟然写出了卡死力扣OJ的代码？  
（不是卡死，只是判题时间太长了……足足一分多钟）  
（可能是网络问题，但是难得一见所以记录在下面）

```c++
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> usCharList;
        int iStrLength = s.size(), iIndexRightPoint = -1, iResult = 0;
        for(int i = 0; i < iStrLength; i++) {
            if (i != 0) s.erase(s[i - 1]);
            while(iIndexRightPoint + 1 < iStrLength && !usCharList.count(s[iIndexRightPoint + 1])) {
                usCharList.insert(s[iIndexRightPoint + 1]);
                iIndexRightPoint++;
            }
            iResult = max(iResult, iIndexRightPoint - i + 1);
        }
        return iResult;
    }
};
```

> 2021 - 03 - 04