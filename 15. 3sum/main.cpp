class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int iLengthNums = nums.size();
        if (iLengthNums < 3) return {};
        vector<vector<int>> vResults;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < iLengthNums; i++) {
            if (nums[i] > 0) return vResults;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int _iIndexLeft = i + 1, _iIndexRight = iLengthNums - 1;
            while (_iIndexLeft < _iIndexRight) {
                int _iTwoSum = nums[_iIndexLeft] + nums[_iIndexRight] ;
                if (_iTwoSum> -nums[i])
                    _iIndexRight--;
                else if (_iTwoSum < -nums[i])
                    _iIndexLeft++;
                else {
                    vResults.push_back(vector<int>({nums[i], nums[_iIndexLeft], nums[_iIndexRight]}));
                    _iIndexLeft++, _iIndexRight--;
                    while (_iIndexLeft < _iIndexRight && nums[_iIndexLeft] == nums[_iIndexLeft - 1]) _iIndexLeft++;
                    while (_iIndexLeft < _iIndexRight && nums[_iIndexRight] == nums[_iIndexRight + 1]) _iIndexRight--;
                }
            }
        }
        return vResults;
    }
};   