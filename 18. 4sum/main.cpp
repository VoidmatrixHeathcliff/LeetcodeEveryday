class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> vvResults;
        if (nums.size() < 4) return vvResults;
        sort(nums.begin(), nums.end());
        int iLength = nums.size();
        for(int i = 0; i < iLength - 3; i++) {
            if (nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            if (nums[i] + nums[iLength - 1] + nums[iLength - 2] + nums[iLength - 3] < target) continue;
            for (int j = i + 1; j < iLength - 2; j++) {
                if (nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target) break;
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                if (nums[i] + nums[j] + nums[iLength - 1] + nums[iLength - 2] < target) continue;
                int iLeftIndex = j + 1, iRightIndex = iLength - 1;
                while (iLeftIndex < iRightIndex) {
                    int _iSum = nums[i] + nums[j] + nums[iLeftIndex] + nums[iRightIndex];
                    if (_iSum == target) {
                        vvResults.push_back({nums[i], nums[j], nums[iLeftIndex], nums[iRightIndex]});
                        while (iLeftIndex < iRightIndex && nums[iLeftIndex] == nums[iLeftIndex + 1]) iLeftIndex++;
                        iLeftIndex++;
                        while (iLeftIndex < iRightIndex && nums[iRightIndex] == nums[iRightIndex - 1]) iRightIndex--;
                        iRightIndex--;
                    } else if (_iSum < target) {
                        iLeftIndex++;
                    } else {
                        iRightIndex--;
                    }
                }
            }
        }
        return vvResults;
    }
};