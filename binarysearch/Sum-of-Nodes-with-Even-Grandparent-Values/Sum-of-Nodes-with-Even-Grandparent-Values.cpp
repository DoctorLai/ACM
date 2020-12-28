// https://helloacm.com/depth-first-search-algorithm-to-compute-the-sum-of-nodes-with-even-grandparent-values/
// https://binarysearch.com/problems/Sum-of-Nodes-with-Even-Grandparent-Values
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
    int ans = 0;
    function<void(Tree*, Tree*, Tree*)> dfs = [&](Tree* root, Tree* parent, Tree* grantparent) {
        if (!root) return;
        if (grantparent != NULL && ((grantparent->val & 1) == 0)) {
            ans += root->val;
        }
        dfs(root->left, root, parent);
        dfs(root->right, root, parent);
    };
    dfs(root, NULL, NULL);
    return ans;
}
