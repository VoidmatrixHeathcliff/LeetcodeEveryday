class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {

    }
    
    void add(int key) {
        if (!contains(key)) _vValues.push_back(key);
    }
    
    void remove(int key) {
        _vValues.erase(std::remove(_vValues.begin(), _vValues.end(), key), _vValues.end());
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        for (int value : _vValues)
            if (key == value) return true;
        return false;
    }
private:
    vector<int> _vValues;

};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */