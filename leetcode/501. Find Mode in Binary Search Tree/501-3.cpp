// https://helloacm.com/how-to-find-the-mode-in-a-binary-search-tree/
// https://leetcode.com/problems/find-mode-in-binary-search-tree/

class Solution {
public:    
    vector<int> dfs(TreeNode* root) {
        if (root == NULL) {
            return {};
        }
        vector<int> r = { root->val };
        if (root->left) {
            // DFS of left tree
            auto a = dfs(root->left);
            // add it to the current result set
            r.insert(r.end(), a.begin(), a.end());
        }
        if (root->right) {            
            // DFS of the right tree
            auto b = dfs(root->right);
            // add it to the current result set
            r.insert(r.end(), b.begin(), b.end());
        }
        return r;
    }
    
    vector<int> findMode(TreeNode* root) {
        auto rr = dfs(root);
        int cnt = 0;
        unordered_map<int, int> data;        
        for (const auto &n: rr) {
            if (data.find(n) == data.end()) {
                data[n] = 1;
            } else {
                data[n] += 1;
            }
            cnt = max(cnt, data[n]);
        }        
        vector<int> result;
        for (auto iter = data.begin(); iter != data.end(); ++ iter) {
            if (iter->second == cnt) {
                result.push_back(iter->first);
            }
        }
        return result;
    }
};
