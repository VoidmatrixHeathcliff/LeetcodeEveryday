class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int iResult = 0;
        for (int num : nums) iResult ^= num;
        return iResult;
    }
};