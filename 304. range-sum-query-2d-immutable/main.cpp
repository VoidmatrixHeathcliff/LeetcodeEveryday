class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int iRowCount = matrix.size();
        if (iRowCount > 0) {
            int iColumnCount = matrix[0].size();
            _vvSumMatrix.resize(iRowCount + 1, vector<int>(iColumnCount + 1));
            for (int i = 0; i < iRowCount; i++) {
                for (int j = 0; j < iColumnCount; j++) {
                    _vvSumMatrix[i + 1][j + 1] = _vvSumMatrix[i + 1][j] + _vvSumMatrix[i][j + 1] - _vvSumMatrix[i][j] + matrix[i][j];
                }
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return _vvSumMatrix[row2 + 1][col2 + 1] - _vvSumMatrix[row1][col2 + 1] - _vvSumMatrix[row2 + 1][col1] + _vvSumMatrix[row1][col1];
    }
private:
    vector<vector<int>> _vvSumMatrix;
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */