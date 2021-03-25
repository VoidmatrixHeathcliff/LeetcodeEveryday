class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> vResult(n, vector<int>(n));
        int iNumCount = pow(n, 2), iIndex = 1;
        int iLimitUp = 0, iLimitDown = n - 1, iLimitLeft = 0, iLimitRight = n - 1;
        while (true) {
            for (int i = iLimitLeft; i <= iLimitRight && iIndex <= iNumCount; i++) vResult[iLimitUp][i] = iIndex, iIndex++;
            if (++iLimitUp > iLimitDown) break;
            for (int i = iLimitUp; i <= iLimitDown && iIndex <= iNumCount; i++) vResult[i][iLimitRight] = iIndex, iIndex++;
            if (--iLimitRight < iLimitLeft) break;
            for (int i = iLimitRight; i >= iLimitLeft && iIndex <= iNumCount; i--) vResult[iLimitDown][i] = iIndex, iIndex++;
            if (--iLimitDown < iLimitUp) break;
            for (int i = iLimitDown; i >= iLimitUp && iIndex <= iNumCount; i--) vResult[i][iLimitLeft] = iIndex, iIndex++;
            if (++iLimitLeft > iLimitRight) break;
        }
        return vResult;
    }
};