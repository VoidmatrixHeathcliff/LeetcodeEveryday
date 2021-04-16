class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> vResult;
        int iLength = nums.size();
        vResult.push_back(nums[0]);
        for(int i = 1; i < iLength; i++)
            vResult.push_back(vResult[i - 1] + nums[i]);
        return vResult;
    }
};