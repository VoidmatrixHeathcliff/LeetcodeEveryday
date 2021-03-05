class Solution {
public:
    string longestPalindrome(string s) {
        vector<string> vPailStrList;
        int iStrLength = s.size();
        /* 检索奇数长度的回文串 */
        for(int iExpandCenter = 0; iExpandCenter < iStrLength; iExpandCenter++) {
            int _iExpandLength = 1;
            while(iExpandCenter - _iExpandLength >= 0 
                && iExpandCenter + _iExpandLength < iStrLength 
                && s[iExpandCenter - _iExpandLength] == s[iExpandCenter + _iExpandLength])
                _iExpandLength++;
            vPailStrList.push_back(s.substr(iExpandCenter - (_iExpandLength - 1), (_iExpandLength - 1) * 2 + 1));
        }
        /* 检索偶数长度的回文串 */
        for(int iExpandCenterLeft = 0; iExpandCenterLeft + 1 < iStrLength; iExpandCenterLeft++) {
            if (s[iExpandCenterLeft] == s[iExpandCenterLeft + 1]) {
                int _iExpandLength = 1;
                while(iExpandCenterLeft - _iExpandLength >= 0 
                && iExpandCenterLeft + _iExpandLength + 1 < iStrLength 
                && s[iExpandCenterLeft - _iExpandLength] == s[iExpandCenterLeft + _iExpandLength + 1])
                _iExpandLength++;
                vPailStrList.push_back(s.substr(iExpandCenterLeft - (_iExpandLength - 1), (_iExpandLength - 1) * 2 + 2));
            }
        }

        /* 查找并返回最长回文串 */
        int iMaxStrLength = 0;
        string strMax;
        for (auto str : vPailStrList)
            if (str.size() > iMaxStrLength){
                strMax = str;
                iMaxStrLength = str.size();
            }
        return strMax;
    }
};