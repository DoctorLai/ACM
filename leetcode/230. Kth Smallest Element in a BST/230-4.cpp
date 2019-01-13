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
    int kthSmallest(TreeNode *root, int k) {
        priority_queue<int, vector<int>, std::greater<int>> q;
        dfs(root, q);
        for (int i = 0; i < k - 1; ++ i) {
            q.pop();
        }
        return q.top();
    }

private:
    void dfs(TreeNode *root, priority_queue<int, vector<int>, std::greater<int>> &q) {
        if (root == NULL) return;
        q.push(root->val);
        dfs(root->left, q);
        dfs(root->right, q);
    }
};
