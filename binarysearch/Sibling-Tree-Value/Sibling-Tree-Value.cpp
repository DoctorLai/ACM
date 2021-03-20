// https://helloacm.com/algorithms-to-compute-the-sibling-value-in-binary-tree/
// https://binarysearch.com/problems/Sibling-Tree-Value
// MEDIUM, RECURSION

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root, int k) {
    int sib = -1;
    while (root) {
        if (root->val == k) {
            return sib;
        }
        if (k > root->val) {
            sib = root->left->val;
            root = root->right;
        } else {
            sib = root->right->val;
            root = root->left;
        }
    }
    return sib;
}
