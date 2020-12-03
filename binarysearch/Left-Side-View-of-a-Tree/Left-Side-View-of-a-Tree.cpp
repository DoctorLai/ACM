// https://helloacm.com/depth-first-search-and-breadth-first-search-algorithm-to-compute-the-left-side-view-of-a-binary-tree/
// https://binarysearch.com/problems/Left-Side-View-of-a-Tree
// MEDIUM, BFS

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {
    if (!root) return {};
    queue<Tree*> Q;
    Q.push(root);
    vector<int> res{};
    while (!Q.empty()) {
        auto sz = Q.size();
        auto p = Q.front();
        res.push_back(p->val);
        for (auto i = 0; i < sz; ++ i) {
            auto p = Q.front();
            if (p->left) {
                Q.push(p->left);
            }
            if (p->right) {
                Q.push(p->right);
            }
            Q.pop();
        }
    }
    return res;
}
