// https://helloacm.com/the-process-killing-algorithms-using-depth-first-search-or-breadth-first-search-kill-a-process/
// https://leetcode.com/problems/kill-process/

class Solution {
public:
    vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
        for (int i = 0; i < pid.size(); ++ i) {
            children[ppid[i]].push_back(pid[i]);
        }
        vector<int> r;
        r.push_back(kill);
        killAll(children[kill], r);
        return r;
    }
private:
    unordered_map<int, vector<int>> children;
    void killAll(vector<int> c, vector<int> &r) {        
        for (const auto &x: c) {
            r.push_back(x);
            killAll(children[x], r);
        }
    }
};
