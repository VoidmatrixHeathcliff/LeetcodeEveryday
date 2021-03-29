class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        _stkMin.push(INT_MAX);
    }
    
    void push(int val) {
        _stk.push(val);
        _stkMin.push(min(_stkMin.top(), val));
    }
    
    void pop() {
        _stk.pop();
        _stkMin.pop();
    }
    
    int top() {
        return _stk.top();
    }
    
    int getMin() {
        return _stkMin.top();
    }

private:
    stack<int> _stk;
    stack<int> _stkMin;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */