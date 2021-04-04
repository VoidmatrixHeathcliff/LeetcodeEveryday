class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int iLength = nums.size();
        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
        while (nums.size() != iLength)
            nums.push_back(0);
    }
};