class Trie {
public:
    /** Initialize your data structure here. */
    Trie() {

    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        _vStrWords.push_back(word);
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        for (string str : _vStrWords) 
            if (str == word) return true;
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        for (string str : _vStrWords) 
            if (str.substr(0, prefix.size()) == prefix) return true;
        return false;
    }

private:
    vector<string> _vStrWords;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */