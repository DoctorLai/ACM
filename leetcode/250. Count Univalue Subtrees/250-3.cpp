/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int countUnivalSubtrees(TreeNode* root) {
        if (root == nullptr) return 0;
        int res = 0;
        if (isUniTree(root->left, root->val) &&
           (isUniTree(root->right, root->val))) {
            res ++;
        }
        return countUnivalSubtrees(root->left) +
            countUnivalSubtrees(root->right) + res;
    }
    
private:
    bool isUniTree(TreeNode* root, int val) {
        if (root == nullptr) return true;
        return (root->val == val) &&
            isUniTree(root->left, val) &&
            isUniTree(root->right, val);
    }
};
