class NumArray {
public:
    NumArray(vector<int>& nums) {
        _nums = nums;
    }
    
    int sumRange(int i, int j) {
        int _iResult = 0;
        for(int index = i; index <= j; index++) {
            _iResult += _nums[index];
        }
        return _iResult;
    }
private:
    vector<int> _nums;

};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */