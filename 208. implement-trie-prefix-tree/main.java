class Trie {

    String data = ",";

    /** Initialize your data structure here. */
    public Trie() {

    }
    
    /** Inserts a word into the trie. */
    public void insert(String word) {
        data += word + ",";
    }
    
    /** Returns if the word is in the trie. */
    public boolean search(String word) {
        return data.contains("," + word + ",");
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    public boolean startsWith(String prefix) {
        return data.contains("," + prefix);
    }
}

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * boolean param_2 = obj.search(word);
 * boolean param_3 = obj.startsWith(prefix);
 */