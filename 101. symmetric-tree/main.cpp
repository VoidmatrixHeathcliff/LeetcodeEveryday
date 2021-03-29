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
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return check(root, root);
    }

private:
    bool check(TreeNode* pLeft, TreeNode* pRight) {
        return !pLeft && !pRight ? true : (!pLeft || !pRight ? false : pLeft->val == pRight->val && check(pLeft->left, pRight->right) && check(pLeft->right, pRight->left));
    }
};