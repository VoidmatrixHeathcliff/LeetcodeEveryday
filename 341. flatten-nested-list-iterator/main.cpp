/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        for (NestedInteger object : nestedList)
            _PushValue(object);
        _iLength = _vValues.size();
    }
    
    int next() {
        return _vValues[_iIndex++];
    }
    
    bool hasNext() {
        return _iIndex < _iLength;
    }
private:
    vector<int> _vValues;
    int _iIndex = 0, _iLength = 0;
    void _PushValue(const NestedInteger& object) {
        if (object.isInteger()) 
            _vValues.push_back(object.getInteger());
        else
            for (NestedInteger _object : object.getList())
                _PushValue(_object);
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */