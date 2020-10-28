// https://helloacm.com/recursive-depth-first-search-algorithm-to-diagonal-tree-traversal/
// https://binarysearch.com/problems/Diagonal-Tree-Traversal
// MEDIUM, DFS

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {
    vector<int> res;
    function<void(Tree*, int)> dfs = [&](Tree* root, int left) {
        if (!root) return;
        if (left >= res.size()) {
            res.resize(res.size() + 1);
        }
        res[left] += root->val;
        dfs(root->left, left + 1);
        dfs(root->right, left);
    };
    dfs(root, 0);
    return res;
}
