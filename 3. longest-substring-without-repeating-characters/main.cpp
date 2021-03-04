class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> usCharList;
        int iStrLength = s.size(), iIndexRightPoint = -1, iResult = 0;
        for(int i = 0; i < iStrLength; i++) {
            if (i != 0) usCharList.erase(s[i - 1]);
            while(iIndexRightPoint + 1 < iStrLength && !usCharList.count(s[iIndexRightPoint + 1])) {
                usCharList.insert(s[iIndexRightPoint + 1]);
                iIndexRightPoint++;
            }
            iResult = max(iResult, iIndexRightPoint - i + 1);
        }
        return iResult;
    }
};