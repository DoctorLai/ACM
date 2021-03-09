// https://helloacm.com/using-depth-first-search-algorithm-to-complete-the-minimax-tree/
// https://binarysearch.com/problems/Minimax-Tree
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
    if (!root) return root;
    function<void(Tree*, int)> dfs = [&](Tree* root, int level) {
        if (!root) return;
        dfs(root->left, level + 1);
        dfs(root->right, level + 1);                
        if ((level & 1) == 0) {            
            int m = INT_MIN;
            if (root->left) m = max(m, root->left->val);
            if (root->right) m = max(m, root->right->val);
            root->val = m == INT_MIN ? root->val : m;
        } else {
            int m = INT_MAX;
            if (root->left) m = min(m, root->left->val);
            if (root->right) m = min(m, root->right->val);
            root->val = m == INT_MAX ? root->val : m;
        }        
    };
    dfs(root, 0);
    return root;
}
