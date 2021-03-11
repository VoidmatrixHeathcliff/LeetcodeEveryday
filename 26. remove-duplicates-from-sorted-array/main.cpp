class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int iLength = nums.size(), iIndexSlow = 0;
        if (!iLength) return 0;
        for (int iIndexFast = 1; iIndexFast < iLength; iIndexFast++)
            if (nums[iIndexSlow] != nums[iIndexFast])
                iIndexSlow++, nums[iIndexSlow] = nums[iIndexFast];
        return iIndexSlow + 1;
    }
};