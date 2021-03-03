class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> vResults;
        for (int i = 0; i <= num; i++) {
            int _iNum = i, _iCount = 0;
            while (_iNum) {
                if (_iNum % 2) _iCount++;
                _iNum /= 2;
            }
            vResults.push_back(_iCount);
        }
        return vResults;
    }
};