// https://helloacm.com/the-process-killing-algorithms-using-depth-first-search-or-breadth-first-search-kill-a-process/
// https://leetcode.com/problems/kill-process/

class Solution {
public:
    vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
        unordered_map<int, vector<int>> children;
        for (int i = 0; i < pid.size(); ++ i) {
            children[ppid[i]].push_back(pid[i]);
        }
        vector<int> r;
        queue<int> Q;
        Q.push(kill);
        while (!Q.empty()) {
            auto p = Q.front();
            r.push_back(p);
            Q.pop();
            for (const auto &n: children[p]) {
                Q.push(n);
            }
        }
        return r;
    }
};
