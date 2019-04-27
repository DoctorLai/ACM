// https://helloacm.com/how-to-count-univalue-subtrees-in-a-binary-tree/
// https://leetcode.com/problems/count-univalue-subtrees/

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
        dfs(root, NULL);
        return count;
    }
    
    bool dfs(TreeNode* root, TreeNode* parent) {
        if (root == NULL) return true; // null node is uni-value
        // use | instead of || to avoid boolean shortcut optimisation
        if (!dfs(root->left, root) | !dfs(root->right, root)) {
            return false;
        }
        count ++;
        // univalue check: the value with parent
        return parent == NULL || root->val == parent->val;
    }
 
private:
    int count = 0;
};
