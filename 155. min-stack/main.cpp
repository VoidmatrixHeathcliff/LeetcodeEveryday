class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int val) {
        _stkNums.push_back(val);
    }
    
    void pop() {
        _stkNums.pop_back();
    }
    
    int top() {
        return _stkNums.back();
    }
    
    int getMin() {
        int iMinNum = _stkNums[0];
        for (int num : _stkNums)
            if (num < iMinNum) iMinNum = num;
        return iMinNum;
    }
private:
    vector<int> _stkNums;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */