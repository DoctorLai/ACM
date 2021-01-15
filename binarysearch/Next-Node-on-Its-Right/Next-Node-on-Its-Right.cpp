// https://helloacm.com/binary-search-algorithm-to-find-next-node-on-its-right-in-a-binary-tree/
// https://binarysearch.com/problems/Next-Node-on-Its-Right
// MEDIUM, BFS

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
Tree* solve(Tree* tree, int target) {
    if (!tree) return NULL;
    queue<Tree*> Q;
    Q.push(tree);
    while (!Q.empty()) {
        auto sz = Q.size();
        for (int i = 0; i < sz; ++ i) {
            auto p = Q.front();
            Q.pop();
            if (p->val == target) {
                return i == sz - 1 ? NULL : Q.front();
            }
            if (p->left) Q.push(p->left);
            if (p->right) Q.push(p->right);
        }
    }
    return NULL;
}
