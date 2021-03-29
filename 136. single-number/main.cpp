class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int iLength = nums.size();
        sort(nums.begin(), nums.end());
        if (iLength == 1 || nums[0] != nums[1]) return nums[0];
        for (int i = 1; i < iLength - 1; i++)
            if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
                return nums[i];
        return nums[iLength - 1];
    }
};