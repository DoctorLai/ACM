// https://helloacm.com/recursive-algorithm-to-construct-binary-tree-from-preorder-and-postorder-traversal/
// https://leetcode.com/problems/maximum-sum-bst-in-binary-tree/
// MEDIUM, RECURSION

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
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        if (pre.empty()) return NULL;
        TreeNode* root = new TreeNode(pre[0]);
        if (pre.size() == 1) return root;
        int L = 0;
        for (int i = 0; i < post.size(); ++ i) {
            if (post[i] == pre[1]) {
                L = i + 1;
                break;
            }
        }
        vector<int> left1(begin(pre) + 1, begin(pre) + 1 + L);
        vector<int> right1(begin(post), begin(post) + L);
        vector<int> left2(begin(pre) + L + 1, end(pre));
        vector<int> right2(begin(post) + L, end(post) - 1);
        root->left = constructFromPrePost(left1, right1);
        root->right = constructFromPrePost(left2, right2);
        return root;
    }
};
