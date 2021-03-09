class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int iLengthNums = nums.size(), iResult = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < iLengthNums; i++) {
            int _iIndexLeft = i + 1, _iIndexRight = iLengthNums - 1;
            while (_iIndexLeft < _iIndexRight) {
                int _iSum = nums[i] + nums[_iIndexLeft] + nums[_iIndexRight];
                if (abs(target - iResult) > abs(target - _iSum)) iResult = _iSum;
                if (_iSum == target)
                    return iResult;
                else
                    _iSum > target ? _iIndexRight-- : _iIndexLeft++;
            }
        }
        return iResult;
    }
};