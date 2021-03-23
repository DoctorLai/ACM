// https://helloacm.com/counting-the-only-child-in-the-binary-tree-using-breadth-first-search-algorithm/
// https://binarysearch.com/problems/Only-Child
// MEDIUM, BFS

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    if (!root) return 0;
    queue<pair<Tree*, int>> Q;
    Q.emplace(root, -1);
    int ans = 0;
    while (!Q.empty()) {
        auto [cur, cnt] = Q.front();
        Q.pop();
        int x = 0;
        if (cur->left) x ++;
        if (cur->right) x ++;
        if (cnt == 1) {
            ans ++;
        }
        if (cur->left) {
            Q.emplace(cur->left, x);
        }
        if (cur->right) {
            Q.emplace(cur->right, x);
        }
    }
    return ans;
}
