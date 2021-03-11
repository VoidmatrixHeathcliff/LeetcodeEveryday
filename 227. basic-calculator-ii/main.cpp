class Solution {
public:
    int calculate(string s) {
        vector<int> vStkValues;
        char chPreSign = '+';
        int iValue = 0, iLengthStr = s.size();
        for (int i = 0; i < iLengthStr; i++) {
            if (isdigit(s[i]))
                iValue = iValue * 10 + int(s[i] - '0');
            if (!isdigit(s[i]) && s[i] != ' ' || i == iLengthStr - 1) {
                switch (chPreSign) {
                    case '+': vStkValues.push_back(iValue); break;
                    case '-': vStkValues.push_back(-iValue); break;
                    case '*': vStkValues.back() *= iValue; break;
                    case '/': vStkValues.back() /= iValue; break;
                }
                chPreSign = s[i], iValue = 0;
            }
        }
        return accumulate(vStkValues.begin(), vStkValues.end(), 0);
    }
};