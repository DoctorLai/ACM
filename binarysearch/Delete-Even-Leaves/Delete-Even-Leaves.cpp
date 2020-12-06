// https://helloacm.com/depth-first-search-algorithm-to-delete-even-leaves-from-binary-tree/
// https://binarysearch.com/problems/Delete-Even-Leaves
// MEDIUM, DFS

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree* solve(Tree* root) {
    if (!root) return NULL;
    root->left = solve(root->left);
    root->right = solve(root->right);
    if (root->left == root->right) {
        if ((root->val & 1) == 0) {
            return NULL;
        }
    }
    return root;
}
