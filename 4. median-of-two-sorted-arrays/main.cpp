class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        unsigned iNumCount = nums1.size();
        return iNumCount % 2 ? nums1[iNumCount / 2] : (nums1[iNumCount / 2 - 1] + nums1[iNumCount / 2]) / 2.0;
    }
};