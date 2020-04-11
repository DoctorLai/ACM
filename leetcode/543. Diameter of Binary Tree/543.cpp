// https://helloacm.com/recursive-depth-first-search-algorithm-to-compute-the-diameter-of-binary-tree/
// https://leetcode.com/problems/diameter-of-binary-tree/
// EASY, RECURSION, DFS

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
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) return 0;
        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        return max(left, max(right, depth(root->left) + depth(root->right)));
    }
    
    int depth(TreeNode* root) {
        if (root == nullptr) return 0;
        if (data.find(root) != data.end()) return data[root];
        int r = 1 + max(depth(root->left), depth(root->right));
        data[root] = r;
        return r;
    }
 
private:
    unordered_map<TreeNode*, int> data;    
};
