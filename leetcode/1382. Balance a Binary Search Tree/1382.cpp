// https://helloacm.com/how-to-balance-a-binary-search-tree-using-recursive-inorder-traversal-algorithm/
// https://leetcode.com/problems/balance-a-binary-search-tree/
// MEDIUM, RECURSION, BINARY TREE

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
    TreeNode* balanceBST(TreeNode* root) {
        if (!root) return NULL;
        vector<int> arr = inOrder(root);
        return convert(arr, 0, arr.size() - 1);
    }
    
private:
    vector<int> inOrder(TreeNode* root) {
        if (!root) return {};
        vector<int> r;
        vector<int> left = inOrder(root->left);
        if (!left.empty()) {
            r.insert(end(r), begin(left), end(left));
        }
        r.push_back(root->val);
        vector<int> right = inOrder(root->right);
        if (!right.empty()) {
            r.insert(end(r), begin(right), end(right));
        }
        return r;
    }
    
    TreeNode* convert(vector<int> &arr, int left, int right) {
        if (left > right) return NULL;
        if (left == right) return new TreeNode(arr[left]);
        int mid = (left + right) / 2;
        TreeNode* root = new TreeNode(arr[mid]);
        root->left = convert(arr, left, mid - 1);
        root->right = convert(arr, mid + 1, right);
        return root;
    }
};
