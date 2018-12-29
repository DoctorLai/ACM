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
        if (!emp.containsKey(id)) return 0;
        Queue<Employee> Q = new LinkedList();
        Q.add(emp.get(id)); // push the 'root' of the sub-tree into the queue
        int r = 0;
        while (!Q.isEmpty()) {
            Employee p = Q.peek();
            Q.poll();
            r += p.importance;
            for (int x: p.subordinates) {   // expand the child nodes
                if (emp.containsKey(x)) {
                    Q.add(emp.get(x));
                }
            }
        }
        return r;
    }
}
