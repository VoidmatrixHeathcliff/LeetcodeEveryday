class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> iResults;
        int iNumCount = nums.size();
        for (int iIndexNum = 0; iIndexNum < iNumCount; iIndexNum++) {
            int _iIndexNextNum = (iIndexNum + 1) % iNumCount;
            bool _isFindNextLargerNum = false;
            while (_iIndexNextNum != iIndexNum) {
                if (nums[_iIndexNextNum] > nums[iIndexNum]) {
                    iResults.push_back(nums[_iIndexNextNum]);
                    _isFindNextLargerNum = true;
                    break;
                } else {
                    _iIndexNextNum = ++_iIndexNextNum % iNumCount;
                }
            }
            if (!_isFindNextLargerNum) iResults.push_back(-1);
        }
        return iResults;
    }
};