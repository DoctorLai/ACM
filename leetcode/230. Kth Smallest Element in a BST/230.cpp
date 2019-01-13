// https://helloacm.com/how-to-find-the-kth-smallest-element-in-a-bst-tree-using-java-c/
// https://leetcode.com/problems/kth-smallest-element-in-a-bst/

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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> list;
        dfs(root, list);
        return list[k - 1];
    }

private:
    void dfs(TreeNode* root, vector<int> &list) {
        if (root == NULL) return;
        dfs(root->left, list);
        list.push_back(root->val);
        dfs(root->right, list);
    }
};
