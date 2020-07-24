// https://helloacm.com/depth-first-search-algorithm-to-compute-the-diameter-of-n-ary-tree/
// https://leetcode.com/problems/diameter-of-n-ary-tree/
// MEDIUM, DFS

class Solution {
public:
    int diameter(Node* root) {
        depth(root);
        return ans;
    }
    
private:
    int ans = 0;
    
    int depth(Node* root) {
        if (!root) return -1;
        int curDepth = 0;
        int m1 = 0, m2 = 0;
        for (const auto &n: root->children) {
            int d = depth(n);
            curDepth = max(curDepth, d);
            if (d > m1) {
                m2 = m1;
                m1 = d;
            } else if (d > m2) {
                m2 = d;
            }
        }
        ans = max(ans, m1 + m2);
        return curDepth + 1;
    }
};
