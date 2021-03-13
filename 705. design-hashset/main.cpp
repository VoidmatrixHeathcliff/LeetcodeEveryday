class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {

    }
    
    void add(int key) {
        _hashmapValues.insert(pair<int, char>(key, ' '));
    }
    
    void remove(int key) {
        _hashmapValues.erase(key);
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return _hashmapValues.find(key) != _hashmapValues.end();
    }
private:
    unordered_map<int, char> _hashmapValues;

};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */