// https://helloacm.com/dynamic-programming-algorithms-to-compute-the-longest-chain-of-blocks/
// https://binarysearch.com/problems/Chain-of-Blocks
// MEDIUM, DFS, MEMOIZATION, DP

int solve(vector<vector<int>>& blocks) {
    if (blocks.empty()) return 0;
    unordered_map<int, vector<int>> data;
    for (auto &n: blocks) {
        data[n[0]].push_back(n[1]);
    }
    unordered_map<int, int> memo;
    function<int(int)> dfs = [&](int start) {
        if (!data.count(start)) return 0;
        if (memo.count(start)) return memo[start];
        int ans = 0;
        for (auto &n: data[start]) {
            ans = max(ans, dfs(n) + 1);
        }
        return memo[start] = ans;
    };
    int ans = 0;
    for (auto &[a, b]: data) {
        ans = max(ans, dfs(a));
    }
    return ans;
} 
