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
        vector<int> arr;
        dfs(root, arr);
        int i = 0, j = arr.size() - 1;
        while (i < j) {
            if (arr[i] + arr[j] == k) {
                return true;
            }
            if (arr[i] + arr[j] > k) {
                j --;
            } else {
                i ++;
            }
        }
        return false;
    }
    
private:
    void dfs(TreeNode* root, vector<int> &arr) {
        if (root == NULL) return;        
        dfs(root->left, arr);    
        arr.push_back(root->val);
        dfs(root->right, arr);    
    }
};