class Solution {
public:
    int maxArea(vector<int>& height) {
        int iMaxArea = 0, iIndexLeft = 0, iIndexRight = height.size() - 1;
        while (iIndexLeft < iIndexRight) {
            iMaxArea = max(iMaxArea, min(height[iIndexLeft], height[iIndexRight]) * (iIndexRight - iIndexLeft));
            height[iIndexLeft] <= height[iIndexRight] ? iIndexLeft++ : iIndexRight--;
        }
        return iMaxArea;
    }
};