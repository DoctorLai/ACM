// https://helloacm.com/depth-first-search-algorithm-with-hash-set-to-find-elements-in-a-contaminated-binary-tree/
// https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/
// MEDIUM, DFS

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class FindElements {
public:
    FindElements(TreeNode* root) {
        dfs(root, 0);
    }
    
    bool find(int target) {
        return data.count(target);
    }
private:
    unordered_set<int> data;
    void dfs(TreeNode* root, int num) {
        if (!root) return;
        root-&t;val = num;
        data.insert(num);
        dfs(root->left, num * 2 + 1);
        dfs(root->right, num * 2 + 2);
    }
};
 
/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
