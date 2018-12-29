// https://helloacm.com/sum-up-tree-sub-tree-values-compute-employee-importance-via-dfs-or-bfs/
// https://leetcode.com/problems/employee-importance/

/*
// Employee info
class Employee {
    // It's the unique id of each node;
    // unique id of this employee
    public int id;
    // the importance value of this employee
    public int importance;
    // the id of direct subordinates
    public List<Integer> subordinates;
};
*/
class Solution {
    public int getImportance(List<Employee> employees, int id) {
        Map<Integer, Employee> emp = new HashMap();
        for (Employee e: employees) {
           emp.put(e.id, e);
        }
        return dfs(emp, id);
    }

    private int dfs(Map<Integer, Employee> emp, int id) {
        if (!emp.containsKey(id)) return 0;
        int r = emp.get(id).importance;
        for (int i: emp.get(id).subordinates) {
            r += dfs(emp, i);
        }
        return r;
    }
}
