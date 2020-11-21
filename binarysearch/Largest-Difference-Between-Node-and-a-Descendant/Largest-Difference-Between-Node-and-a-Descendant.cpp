// https://helloacm.com/depth-first-search-algorithm-to-find-the-largest-difference-between-node-and-a-descendant-in-a-binary-tree/
// https://binarysearch.com/problems/Largest-Difference-Between-Node-and-a-Descendant
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
    function<void(Tree*, int, int)> dfs = [&](Tree* root, int curMin, int curMax) {
        if (!root) return;
        ans = max(ans, abs(curMin - root->val));
        ans = max(ans, abs(curMax - root->val));
        if (root->left) 
            dfs(root->left, min(curMin, root->val), 
                max(curMax, root->val));
        if (root->right)
            dfs(root->right, min(curMin, root->val), 
                max(curMax, root->val));
    };
    dfs(root, root->val, root->val);
    return ans;
}
