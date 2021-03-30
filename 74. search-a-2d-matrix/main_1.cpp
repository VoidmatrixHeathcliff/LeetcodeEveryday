class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        auto row = upper_bound(matrix.begin(), matrix.end(), target, [](const int b, const vector<int>& a) {return b < a[0];});
        if (row == matrix.begin()) return false;
        row--; return binary_search(row->begin(), row->end(), target);
    }
};