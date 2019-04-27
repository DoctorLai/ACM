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
        if (root == NULL) return 0;        
        int count = 0;
        dfs(root, count);
        return count;
    }
    
    bool dfs(TreeNode* root, int &count) {
        if (root->left == NULL && root->right == NULL) {
            count ++;
            return true;
        }
        bool valid = true;
        if (root->left != NULL) {
            valid = dfs(root->left, count) && valid && root->left->val == root->val;
        }
        if (root->right != NULL) {
            valid = dfs(root->right, count) && valid && root->right->val == root->val;
        }
        if (valid) {
            count ++;
        }
        return valid;
    }
};
