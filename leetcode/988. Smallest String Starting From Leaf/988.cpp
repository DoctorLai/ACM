// https://helloacm.com/depth-first-search-algorithm-to-compute-the-smallest-string-starting-from-leaf/
// https://leetcode.com/problems/smallest-string-starting-from-leaf/
// MEDIUM, DFS

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string smallestFromLeaf(TreeNode* root) {
        dfs(root, "");
        return ans;
    }
private:
    string ans = "";
    void dfs(TreeNode* root, string cur) {
        if (!root) return;
        if ((root->left == nullptr) && (root->right == nullptr)) {
            cur = (char)(97 + root->val) + cur;
            if ((ans == "") || (cur < ans)) {
               ans = cur; 
            }
            return;
        }
        dfs(root->left, (char)(97 + root->val) + cur);
        dfs(root->right,(char)(97 + root->val) + cur);
    }
};
