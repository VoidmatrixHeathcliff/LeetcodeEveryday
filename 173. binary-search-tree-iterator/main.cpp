/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
        inorder(root, vNodes);
    }
    
    int next() {
        return vNodes[iIndex++];
    }
    
    bool hasNext() {
        return iIndex < vNodes.size();
    }

private:
    vector<int> vNodes;
    int iIndex = 0;
    void inorder(TreeNode* root, vector<int>& vNodes) {
        if (!root) return;
        inorder(root->left, vNodes);
        vNodes.push_back(root->val);
        inorder(root->right, vNodes);
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */