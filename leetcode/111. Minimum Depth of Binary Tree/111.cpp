// https://helloacm.com/coding-exercise-minimum-depth-of-binary-tree-c-online-judge/
// https://leetcode.com/problems/minimum-depth-of-binary-tree/
// EASY, DFS, RECURSION

class Solution {
public:
    int minDepth(TreeNode *root) {
        // empty tree depth = 0
        if (root == NULL) return 0;
        // leaf node depth = 1
        if ((root->left == NULL) && (root->right == NULL)) return 1;
        // only right sub-tree
        if (root->left == NULL) return minDepth(root->right) + 1;
        // only left sub-tree
        if (root->right == NULL) return minDepth(root->left) + 1;
        // depth of left tree
        int left =  minDepth(root->left);
        // depth of right tree
        int right = minDepth(root->right);
        // return the smaller one
        return min(left, right) + 1;
    }
};
