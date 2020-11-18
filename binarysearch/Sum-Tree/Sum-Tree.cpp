// https://helloacm.com/depth-first-search-and-breadth-first-search-algorithm-in-checking-sum-of-children-nodes-in-binary-tree/
// https://binarysearch.com/problems/Sum-Tree
// MEDIUM, DFS, RECURSION

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
bool solve(Tree* root) {
    if (root == NULL) return true;
    if (root->left == NULL && root->right == NULL) return true;
    int val = root->val;
    int other = 0;
    if (root->left != NULL) other += root->left->val;
    if (root->right != NULL) other += root->right->val;
    return (val == other) && solve(root->left) && solve(root->right);
}
