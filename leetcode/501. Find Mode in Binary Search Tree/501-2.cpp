// https://helloacm.com/how-to-find-the-mode-in-a-binary-search-tree/
// https://leetcode.com/problems/find-mode-in-binary-search-tree/

class Solution {
public:    
    void dfs(TreeNode* root, vector<int> &r) {
        if (root == NULL) {
            return ;
        }
        r.push_back(root->val);
        if (root->left) {
            dfs(root->left, r);            
        }
        if (root->right) {            
            dfs(root->right, r);
        }        
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int> rr;
        dfs(root, rr);
        int cnt = 0;
        unordered_map<int, int> data;        
        for (const auto &n: rr) {
            if (data.find(n) == data.end()) {
                data[n] = 1;
            } else {
                data[n] += 1; // update the frequency
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
