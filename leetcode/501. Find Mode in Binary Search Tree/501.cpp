// https://helloacm.com/how-to-find-the-mode-in-a-binary-search-tree/
// https://leetcode.com/problems/find-mode-in-binary-search-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> findMode(TreeNode* root) {        
        if (root == NULL) return {};
        unordered_map<int, int> count;
        queue<TreeNode*> Q;
        Q.push(root);
        int maxfreq = 0;
        while (!Q.empty()) {
            auto p = Q.front();
            Q.pop();
            if (count.find(p->val) == count.end()) {
                count[p->val] = 1;
            } else {
                count[p->val]++; // update frequency
            }
            maxfreq = max(maxfreq, count[p->val]);
            // expand the child nodes
            if (p->left) Q.push(p->left);
            if (p->right) Q.push(p->right);            
        }
        vector<int> r;
        for (auto it = count.begin(); it != count.end(); ++ it) {
            if (it->second == maxfreq) {
                // find the mode                        
                r.push_back(it->first);
            }
        }
        return r;
    }
};
