// https://helloacm.com/counting-maximal-value-roots-in-binary-tree-using-depth-first-search-algorithm/
// https://binarysearch.com/problems/Counting-Maximal-Value-Roots-in-Binary-Tree
// EASY, DFS

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    int ret = 0;
    function<int(Tree*)> dfs = [&](Tree* root) {
        if (!root) return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        if (root->val >= max(left, right)) {
            ret ++;
        }
        return max({root->val, left, right});
    };
   dfs(root);    
   return ret;
}
