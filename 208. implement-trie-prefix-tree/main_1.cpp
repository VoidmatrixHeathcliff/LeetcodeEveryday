class Trie {
public:
    /** Initialize your data structure here. */
    Trie() : children(26), isEnd(false) {

    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* node = this;
        for (char ch : word) {
            ch -= 'a';
            if (!node->children[ch]) 
                node->children[ch] = new Trie();
            node = node->children[ch];
        }
        node->isEnd = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* node = this->searchPrefix(word);
        return node && node->isEnd;
    }   
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        return this->searchPrefix(prefix);
    }

private:
    vector<Trie*> children;
    bool isEnd; 
    Trie* searchPrefix(string prefix) {
        Trie* node = this;
        for (char ch : prefix) {
            ch -= 'a';
            if (!node->children[ch]) return nullptr;
            node = node->children[ch];
        }
        return node;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */