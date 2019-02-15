// https://helloacm.com/how-to-sum-range-binary-search-tree/
// https://leetcode.com/problems/range-sum-of-bst/

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
    int rangeSumBST(TreeNode* root, int L, int R) {
        ans = 0;
        dfs(root, L, R);
        return ans;
    }
    
private:
    void dfs(TreeNode* root, int L, int R) {
        if (root == NULL) return;
        if (root->val >= L && root->val <= R) {
            ans += root->val;    // update the sum
        }
        if (root->val >= L) { // search the left tree
            dfs(root->left, L, R);
        }
        if (root->val <= R) { // search the right tree
            dfs(root->right, L, R);
        }
    }
    
    int ans;
};

