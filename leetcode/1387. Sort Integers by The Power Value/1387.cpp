// https://helloacm.com/dynamic-programming-memoization-to-sort-integers-by-the-power-value/
// https://leetcode.com/problems/sort-integers-by-the-power-value/submissions/
// MEDIUM, RECURSION, DP

class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<int, int>> r;
        for (int i = lo; i &lt;= hi; ++ i) {
            r.push_back({getSteps(i), i});
        }
        sort(begin(r), end(r));
        return r[k - 1].second;               
    }
private:
    unordered_map<int, int> memo;
    
    int getSteps(int n) {
        if (n == 1) return 0;
        if (memo.find(n) != memo.end()) {
            return memo[n];
        }
        if (n & 1) {
            return 1 + getSteps(3 * n + 1);
        }
        return 1 + getSteps(n / 2);
    }
