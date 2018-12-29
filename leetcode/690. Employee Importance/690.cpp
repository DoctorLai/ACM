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
        return dfs(id);
    }
private:
    unordered_map<int, int> cached;
    unordered_map<int, Employee*> emp;

    int dfs(int id) {
        if (emp.find(id) == emp.end()) return 0;
        // we have computed this before, so no need to compute again
        if (cached.find(id) != cached.end()) return cached[id];
        int r = emp[id]->importance;
        for (auto e: emp[id]->subordinates) {
            r += dfs(e);
        };
        cached[id] = r; // store the value
        return r;
    }
};
