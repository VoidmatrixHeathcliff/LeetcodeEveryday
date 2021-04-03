# 1143. longest-common-subsequence

[原题链接](https://leetcode-cn.com/problems/longest-common-subsequence/)

好家伙，果然又是一道动态规划的题！  

刚开始压根就没想到用动态规划，做着做着题题干也忘记了最关键的一个细节：  
要求求的是**最长**公共子序列，然而我废了老鼻子劲写了个第一个最长子序列的代码：  

```c++
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        string strShorter, strLonger;
        text1.size() < text2.size()
            ? (strShorter = text1, strLonger = text2) 
            : (strShorter = text2, strLonger = text1);
        int iIndexStart = 0, iResult = 0;
        for (int iIndexShorter = 0; iIndexShorter < strShorter.size(); iIndexShorter++)
            for (int iIndexLonger = iIndexStart; iIndexLonger < strLonger.size(); iIndexLonger++)
                if (strShorter[iIndexShorter] == strLonger[iIndexLonger]) {
                    cout << strShorter[iIndexShorter] << " " << strLonger[iIndexLonger] << endl;
                    iResult++, iIndexStart = ++iIndexLonger;
                    break;
                }     
        return iResult;
    }
};
```

去啃动态规划啦~

完了……看不懂了……等专门学一下动态规划再回来啃吧  
第一次失败的这么彻底，淦！

> 2021 - 04 - 03
