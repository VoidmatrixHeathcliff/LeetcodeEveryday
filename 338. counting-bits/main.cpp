class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> vResults;
        for (int i = 0; i <= num; i++) {
            bitset<numeric_limits<unsigned int>::digits> _bits(i);
            int _iNums = 0;
            for (int j = 0; j < _bits.size(); j++) {
                if (_bits[j]) _iNums++;
            }
            vResults.push_back(_iNums);
        }
        return vResults;
    }
};