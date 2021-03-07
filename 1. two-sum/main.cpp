class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vResults;
        int iLengthNums = nums.size();
        bool bIsFoundResult = false;
        for (int i = 0; (i < iLengthNums) && !bIsFoundResult; i++) {
            int _iAnotherResult = target - nums[i];
            for (int j = i + 1; j < iLengthNums; j++) {
                if (nums[j] == _iAnotherResult) {
                    vResults.push_back(i);
                    vResults.push_back(j);
                    bIsFoundResult = true;
                    break;
                }
            }
        }
        return vResults;
    }
};