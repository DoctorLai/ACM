// https://helloacm.com/sum-up-tree-sub-tree-values-compute-employee-importance-via-dfs-or-bfs/
// https://leetcode.com/problems/employee-importance/

/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        for (const auto &e: employees) {
            emp[e->id] = e;
        }
        return bfs(id);
    }
private:
    unordered_map<int, Employee*> emp;

    int bfs(int id) {
        if (emp.find(id) == emp.end()) return 0;
        queue<Employee*> Q;
        Q.push(emp[id]);
        int r = 0;
        while (!Q.empty()) {
            auto p = Q.front();
            Q.pop();
            r += p->importance;
            for (const auto &n: p->subordinates) {
                if (emp.find(n) != emp.end()) {
                    Q.push(emp[n]);
                }
            }
        }
        return r;
    }
};
