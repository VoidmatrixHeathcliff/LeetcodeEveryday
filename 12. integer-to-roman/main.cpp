class Solution
{
public:
    string intToRoman(int num)
    {
        string strResult;
        int iAryKeys[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        const char* strAryValues[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for (int i = 0; i < 13; i++) {
            while (num >= iAryKeys[i]) {
                strResult.append(strAryValues[i]);
                num -= iAryKeys[i];
            }
        }
        return strResult;
    }
};