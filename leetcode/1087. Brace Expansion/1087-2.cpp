// https://helloacm.com/the-brace-expansion-algorithms-using-breadth-first-search-or-depth-first-search/
// https://leetcode.com/problems/brace-expansion/

class Solution {
public:
    vector<string> expand(string S) {
        vector<vector<char>> data;
        int n = S.size(), i = 0;        
        while (i < n) {
            if (isalpha(S[i])) {
                data.push_back({S[i]});
                i ++;
            } else {
                i ++;
                int j = i;
                vector<char> cur = {};
                while (S[j] != '}') {
                    if (S[j] != ',') {
                        cur.push_back(S[j]);
                    }
                    j ++;
                }                
                data.push_back(cur);
                i = j + 1;
            }            
        }
        vector<string> r;
        dfs(data, 0, r, "");
        std::sort(begin(r), end(r));
        return r;
    }
 
private:
    void dfs(const vector<vector<char>> &data, int idx, vector<string> &r, string p) {
        if (p.size() == data.size()) {
            r.push_back(p);
            return;
        }
        for (int i = 0; i < data[idx].size(); ++ i) {
            dfs(data, idx + 1, r, p + data[idx][i]);
        }
    }
