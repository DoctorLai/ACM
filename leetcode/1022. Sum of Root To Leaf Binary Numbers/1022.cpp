// https://helloacm.com/how-to-sum-the-root-to-leaf-in-binary-numbers-in-a-binary-tree-using-breadth-first-search/
// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/

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
    int sumRootToLeaf(TreeNode* root) {
        int sum = 0;
        queue<pair<TreeNode*, int>> q;
        if (root == NULL) return 0;
        q.push(make_pair(root, root->val)); // push the root
        while (q.size() > 0) {
            auto p = q.front();
            q.pop();
            TreeNode* node = p.first;
            int cur = p.second;
            if (node->left == NULL && node->right == NULL) { // leaf node
                sum += cur;   
            } else {
               if (node->left != NULL) { // push left children
                   q.push(make_pair(node->left, cur * 2 + node->left->val));
               }
               if (node->right != NULL) { // push right children
                   q.push(make_pair(node->right, cur * 2 + node->right->val));
               }
            }
        }
        return sum;
    }
};
