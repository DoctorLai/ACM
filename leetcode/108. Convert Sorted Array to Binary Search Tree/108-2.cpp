// https://helloacm.com/how-to-convert-sorted-array-to-balanced-binary-search-tree/
// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty()) return nullptr;
        int mid = nums.size() / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        if (mid > 0) {
            vector<int> left(begin(nums), begin(nums) + mid);
            root->left = sortedArrayToBST(left);
        }
        if (mid + 1 < nums.size()) {
            vector<int> right(begin(nums) + mid + 1, end(nums));
            root->right = sortedArrayToBST(right);
        }
        return root;
    }
};
