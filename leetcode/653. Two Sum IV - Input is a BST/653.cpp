// https://helloacm.com/finding-two-numbers-of-given-sum-in-binary-search-tree/
// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

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
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> set;
        return find(root, k, set);
    }
    
private:
    bool find(TreeNode* root, int k, unordered_set<int> &set) {
        if (root == NULL) return false;
        if (set.count(k - root->val)) return true;
        set.insert(root->val);
        return find(root->left, k, set) || find(root->right, k, set);
    }
};