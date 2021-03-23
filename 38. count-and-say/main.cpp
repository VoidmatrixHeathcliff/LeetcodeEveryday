class Solution {
public:
    string countAndSay(int n) {
        string strResult = "1";
        for (int i = 0; i < n - 1; i++)
            strResult = GenerateNext(strResult);
        return strResult;
    }
private:
    string GenerateNext(string str) {
        string strResult;
        int iIndex = 0, iLength = str.size();
        while (iIndex < iLength) {
            int _iNum = 1;
            while (iIndex + _iNum < iLength && str[iIndex] == str[iIndex + _iNum]) _iNum++;
            strResult += to_string(_iNum)+ str[iIndex];
            iIndex += _iNum;
        }
        return strResult;
    }
};