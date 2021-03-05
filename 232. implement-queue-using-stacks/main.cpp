class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        _vNumList.push_back(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int iResult = _vNumList[0];
        _vNumList.erase(_vNumList.begin());
        return iResult;
    }
    
    /** Get the front element. */
    int peek() {
        return _vNumList[0];
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return _vNumList.empty();
    }
private:
    vector<int> _vNumList;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */