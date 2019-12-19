// https://helloacm.com/compute-the-sequential-digits-within-a-range-using-dfs-bfs-or-bruteforce-algorithms/
// https://leetcode.com/problems/sequential-digits/
// MEDIUM, BFS

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        queue<int> Q;
        for (int i = 1; i <= 9; ++ i) {
            Q.push(i);
        }
        while (!Q.empty()) {
            int p = Q.front();
            Q.pop();
            if (p >= low && p <= high) {
                res.push_back(p);
            }
            if (p < high) {
                int x = p % 10;
                if (x != 9) {
                    Q.push(p * 10 + x + 1);
                }
            }
        }
        sort(begin(res), end(res));
        return res;
    }
};
