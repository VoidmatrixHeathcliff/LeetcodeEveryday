class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> vStrLineList(numRows);
        int iIndexLine = 0;
        bool bIsDown = true;
        switch(numRows) {
            case 1:
                return s;
            case 2:
                for(int i = 0; i < s.size(); i++) {
                    vStrLineList[iIndexLine] += s[i];
                    iIndexLine = ++iIndexLine % 2;
                }
                return vStrLineList[0].append(vStrLineList[1]);
            default:  
                for(int i = 0; i < s.size(); i++) {
                    if (bIsDown) {
                        vStrLineList[iIndexLine] += s[i];
                        if (iIndexLine + 1 > numRows - 1) {
                            bIsDown = !bIsDown;
                            iIndexLine--;
                        } else {
                            iIndexLine++;
                        }
                    } else {
                        vStrLineList[iIndexLine] += s[i];
                        if (iIndexLine - 1 < 1) {
                            bIsDown = !bIsDown;
                            iIndexLine = 0;
                        } else {
                            iIndexLine--;
                        }
                    }
                }
                for (int i = 1; i < numRows; i++)
                    vStrLineList[0].append(vStrLineList[i]);
                return vStrLineList[0];
        } 
    }
};