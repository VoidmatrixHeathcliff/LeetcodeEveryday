class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> vResult;
        int iLimitUp = 0, iLimitDown = matrix.size() - 1, iLimitLeft = 0, iLimitRight = matrix[0].size() - 1;
        while (true) {
            for (int i = iLimitLeft; i <= iLimitRight; i++) vResult.push_back(matrix[iLimitUp][i]);
            if (++iLimitUp > iLimitDown) break;
            for (int i = iLimitUp; i <= iLimitDown; i++) vResult.push_back(matrix[i][iLimitRight]);
            if (--iLimitRight < iLimitLeft) break;
            for (int i = iLimitRight; i >= iLimitLeft; i--) vResult.push_back(matrix[iLimitDown][i]);
            if (--iLimitDown < iLimitUp) break;
            for (int i = iLimitDown; i >= iLimitUp; i--) vResult.push_back(matrix[i][iLimitLeft]);
            if (++iLimitLeft > iLimitRight) break;
        }
        return vResult;
    }
};