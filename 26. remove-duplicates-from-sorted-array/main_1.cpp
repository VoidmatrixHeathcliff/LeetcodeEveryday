class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int iIndexSlow = 0;
        for (int iIndexFast = 0; iIndexFast < nums.size(); iIndexFast++)
            if (nums[iIndexFast] != val) nums[iIndexSlow] = nums[iIndexFast], iIndexSlow++;
        return iIndexSlow;
    }
};