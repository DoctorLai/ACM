// https://helloacm.com/algorithm-to-follow-the-instructions-to-traversal-a-binary-tree/
// https://binarysearch.com/problems/Tree-Traversal
// MEDIUM, STACK

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root, vector<string>& moves) {
    stack<Tree*> st;
    st.push(root);
    for (const auto &n: moves) {
        if (n == "RIGHT") {
            st.push(root->right);
            root = root->right;
        } else if (n == "LEFT") {
            st.push(root->left);
            root = root->left;
        } else if (n == "UP") {
            st.pop();
            root = st.top();
        }
    }
    return root->val;
}
