class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int iLength = nums.size(), iMaxK = INT_MIN;
        stack<int> stkCandidateK;
        stkCandidateK.push(nums[iLength - 1]);
        for (int i = iLength - 2; i >= 0; i--) {
            if (nums[i] < iMaxK) return true;
            while (!stkCandidateK.empty() && nums[i] > stkCandidateK.top()) {
                iMaxK = stkCandidateK.top(); stkCandidateK.pop();
            }
            if (nums[i] > iMaxK) stkCandidateK.push(nums[i]);
        }
        return false;
    }
};