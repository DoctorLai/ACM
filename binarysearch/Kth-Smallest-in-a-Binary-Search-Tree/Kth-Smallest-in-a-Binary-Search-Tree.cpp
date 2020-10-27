// https://helloacm.com/depth-first-search-algorithm-preorder-traversal-to-compute-the-kth-smallest-in-a-binary-search-tree/
// https://binarysearch.com/problems/Kth-Smallest-in-a-Binary-Search-Tree
// MEDIUM, DFS

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root, int k) {
    Tree* cur;
    function<void(Tree*)> dfs = [&](Tree* root) {
        if (!root) return;
        dfs(root->left);
        k --;        
        if (k == -1) {
            cur = root;
            return;
        }        
        dfs(root->right);
    };
    dfs(root);
    return cur->val;
}
