// https://helloacm.com/recursive-depth-first-search-algorithm-to-convert-to-full-binary-tree-by-removing-single-child-nodes/
// https://binarysearch.com/problems/Convert-to-Full-Binary-Tree
// MEDIUM, RECURSION, DFS

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree* solve(Tree* root) {
    if (!root) return nullptr;
    if (root->left == root->right) {
        return root;
    }
    if (root->left == nullptr || root->right == nullptr) {
        if (root->left) {
            return solve(root->left);
        } else {
            return solve(root->right);
        }
    }
    root->left = solve(root->left);
    root->right = solve(root->right);
    return root;
}
