class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int iLength = nums.size();
        if (iLength == 1 || iLength == 2) return nums[0];
        sort(nums.begin(), nums.end());
        int iRightCount = iLength / 2, iIndex = 0;
        while (iIndex < iLength) {
            int _iNum = nums[iIndex], _iCount = 1;
            while (iIndex < iLength && _iNum == nums[++iIndex])
                _iCount++;
            if (_iCount > iRightCount) return _iNum;
        }
        return nums[iIndex];
    }
};