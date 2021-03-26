class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int iResult = nums[0], iSum = 0;
        for (int num : nums) {
            iSum > 0 ? iSum += num : iSum = num;
            iResult = max(iResult, iSum);
        }
        return iResult;
    }
};