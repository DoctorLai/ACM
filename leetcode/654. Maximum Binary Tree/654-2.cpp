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
    TreeNode* helper(vector<int>& nums, int left, int right) {
        if (left > right) return NULL;
        int maxIndex = left;
        int maxValue = nums[maxIndex];
        // find the maximum value index in the range of [left, right]
        for (int i = left + 1; i <= right; ++ i) {
            if (nums[i] > maxValue) {
                maxValue = nums[i];
                maxIndex = i;
            }
        }
        auto root = new TreeNode(maxValue);
        root->left = helper(nums, left, maxIndex - 1);
        root->right = helper(nums, maxIndex + 1, right);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* root = helper(nums, 0, nums.size() - 1);
        return root;
    }
};
