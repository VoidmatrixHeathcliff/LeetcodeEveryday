class Solution {
public:
    int hammingWeight(uint32_t n) {
        int iNum = 0;
        while (n) n &= n - 1, iNum++;
        return iNum;
    }
};