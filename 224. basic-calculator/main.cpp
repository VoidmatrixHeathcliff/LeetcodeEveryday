class Solution {
public:
    int calculate(string s) {
        stack<int> stkSigns;
        int iResult = 0, iSign = 1, iLength = s.size(), iIndex = 0;
        stkSigns.push(iSign);
        while (iIndex < iLength) {
            switch(s[iIndex]) {
                case ' ':
                    iIndex++;
                    break;
                case '+':
                    iSign = stkSigns.top();
                    iIndex++;
                    break;
                case '-':
                    iSign = -stkSigns.top();
                    iIndex++;
                    break;
                case '(':
                    stkSigns.push(iSign);
                    iIndex++;
                    break;
                case ')':
                    stkSigns.pop();
                    iIndex++;
                    break;
                default:
                    long _iSumTmp = 0;
                    while (iIndex < iLength && s[iIndex] >= '0' && s[iIndex] <= '9')
                        _iSumTmp = _iSumTmp * 10 + s[iIndex] - '0', iIndex++;
                    iResult += iSign * _iSumTmp;
            }
        }
        return iResult;
    }
};