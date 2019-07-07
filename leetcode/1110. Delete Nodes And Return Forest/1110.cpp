// https://helloacm.com/how-to-delete-nodes-from-binary-tree-and-make-a-forest/
// https://leetcode.com/problems/delete-nodes-and-return-forest/

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
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> nodes;
        // convert to hash set for O(1) lookup later
        for (const auto &n: to_delete) {
            nodes.insert(n);
        }   
        vector<TreeNode*> r;
        helper(root, nullptr, nodes, r);
        return r;
    }
    
private:
    void helper(TreeNode* root, TreeNode* parent, unordered_set<int> &nodes, vector<TreeNode*> &result) {
        if (root == nullptr) return;
        if (nodes.count(root->val)) { // if the current node is to be deleted
            if (parent != nullptr) {
                // delete the node from its parent
                if (root == parent->left) {
                    parent->left = nullptr;
                } else {
                    parent->right = nullptr;
                }
            }
            // then we have to recursively check its both independent trees (parent is null)
            helper(root->left, nullptr, nodes, result);
            helper(root->right, nullptr, nodes, result);
        } else {
            // the root is one of the forest
            if (parent == nullptr) {
                result.push_back(root);
            }
            // check both subtrees with root as parent
            helper(root->left, root, nodes, result);
            helper(root->right, root, nodes, result);
        }
    }
};
