// https://helloacm.com/depth-first-search-algorithm-to-compute-the-longest-tree-sum-path-from-root-to-leaf/
// https://binarysearch.com/problems/Longest-Tree-Sum-Path-From-Root-to-Leaf
// MEDIUM, DFS

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    if (!root) return 0;
    int ans = 0;
    int maxSum = 0;
    function<void(Tree*, int, int)> dfs = [&](Tree* root, int sum, int count) {
        if (!root) {            
            return;
        }
        if (root->left == root->right) {
            if ((count > ans) || (count == ans) && (sum > maxSum)) {
                maxSum = sum;
                ans = count;
                return;
            }            
        }        
        if (root->left) {
            dfs(root->left, sum + root->left->val, count + 1);
        }
        if (root->right) {
            dfs(root->right, sum + root->right->val, count + 1);
        }
    };
    dfs(root, root->val, 1);
    return maxSum;
}
