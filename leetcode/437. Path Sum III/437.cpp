// https://helloacm.com/how-to-count-the-path-sum-from-a-binary-tree-using-depth-first-search-algorithm/
// https://leetcode.com/problems/path-sum-iii/

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
    int pathSum(TreeNode* root, int sum) {
       if (root == nullptr) return 0;
       return pathFromRoot(root, sum) + 
              pathSum(root->left, sum) +
              pathSum(root->right, sum);
    }
    
    int pathFromRoot(TreeNode* root, int sum) {
        if (root == nullptr) return 0;
        int r1 = pathFromRoot(root->left, sum - root->val);
        int r2 = pathFromRoot(root->right, sum - root->val); 
        int ans = (root->val == sum) ? 1 : 0;
        return ans + r1 + r2;
    }
};
