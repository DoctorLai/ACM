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
    TreeNode* sortedArrayToBST(vector<int>& nums, int left, int right) {
        if (left > right) {
            return NULL;
        }
        int mid = left + (right - left) / 2;
        TreeNode* head = new TreeNode(nums[mid]);
        head->left = sortedArrayToBST(nums, left, mid - 1);
        head->right = sortedArrayToBST(nums, mid + 1, right);
        return head;
    }
 
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }
};
