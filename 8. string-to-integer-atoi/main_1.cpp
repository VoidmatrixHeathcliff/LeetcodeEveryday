class Solution {
public:
    int myAtoi(string s) {
        int iIndex = 0, iLengthStr = s.size(), iResult = 0;
        bool bIsNegative = false;
        while (s[iIndex] == ' ') iIndex++;
        if (iIndex < iLengthStr) {
            if (s[iIndex] == '-') bIsNegative = true, iIndex++;
            else if (s[iIndex] == '+') iIndex++;
        }
        while (iIndex < iLengthStr && s[iIndex] >= '0' && s[iIndex] <= '9') {
            int _iNum = bIsNegative ? '0' - s[iIndex] : s[iIndex] - '0';
            if (iResult > INT_MAX / 10 || (iResult == INT_MAX / 10 && _iNum > 7)) return INT_MAX;
            if (iResult < INT_MIN / 10 || (iResult == INT_MIN / 10 && _iNum < -8)) return INT_MIN;
            iResult = iResult * 10 + _iNum, iIndex++;
        }
        return iResult;
    }
};