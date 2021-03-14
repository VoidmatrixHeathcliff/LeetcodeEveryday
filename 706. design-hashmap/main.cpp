struct Element {int key, value;};

class MyHashMap {
public:
    /** Initialize your data structure here. */
    MyHashMap() {

    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        for (Element& element : _vElements)
            if (element.key == key)
            {
                element.value = value;
                return;
            }
        Element element = {key, value};
        _vElements.push_back(element);
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        for (const Element element : _vElements)
            if (element.key == key)
                return element.value;
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        _vElements.erase(remove_if(_vElements.begin(), _vElements.end(), [&](Element element){ return  element.key == key; }), _vElements.end());
    }
private:
    vector<Element> _vElements;
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */