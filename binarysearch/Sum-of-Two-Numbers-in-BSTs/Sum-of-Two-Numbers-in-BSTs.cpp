// https://helloacm.com/algorithms-to-check-sum-of-two-numbers-in-binary-search-trees/
// https://binarysearch.com/problems/Sum-of-Two-Numbers-in-BSTs
// MEDIUM, DFS, BINARY SEARCH

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* a, Tree* b, int target) {
    function<bool(Tree*, int)> search = [](Tree* root, int target) {
        while (root) {
            if (target < root->val) {
                root = root->left;
            } else if (target > root->val) {
                root = root->right;
            } else {
                return true;
            }
        }
        return false;
    };
    function<bool(Tree*)> dfs = [&](Tree* root) {
        if (!root) return false;
        if (search(b, target - root->val)) return true;
        if (dfs(root->left)) return true;
        if (dfs(root->right)) return true;
        return false;
    };
    return dfs(a);
}
