// https://helloacm.com/how-to-construct-the-maximum-binary-tree-using-divide-and-conquer-recursion-algorithm/
// https://leetcode.com/problems/maximum-binary-tree/

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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if (nums.empty()) return NULL;
        auto m = max_element(begin(nums), end(nums));
        TreeNode* root = new TreeNode(*m);
        if (m != begin(nums)) {
            vector<int> left(begin(nums), m);
            root->left = constructMaximumBinaryTree(left);
        }
        if (m != end(nums) - 1) {
            vector<int> right(m + 1, end(nums));
            root->right = constructMaximumBinaryTree(right);
        }
        return root;
    }
};
