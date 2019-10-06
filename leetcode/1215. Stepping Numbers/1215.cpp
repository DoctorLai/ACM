// https://helloacm.com/counting-the-stepping-numbers-between-a-range-using-depth-first-search-algorithm/
// https://leetcode.com/problems/stepping-numbers/

class Solution {
public:
    vector<int> countSteppingNumbers(int low, int high) {
        vector<int> res;
        if (0 >= low) res.push_back(0);
        for (int i = 1; i <= 9; ++ i) {
            dfs(res, low, high, i);
        }
        sort(begin(res), end(res));
        return res;
    }

    void dfs(vector<int> &res, int64_t low, int64_t high, int64_t cur) {
        if (cur > high) return;
        if (cur >= low) res.push_back(cur);
        int x = cur % 10;
        if (x < 9) {
            dfs(res, low, high, (cur * 10) + x + 1);
        }
        if (x > 0) {
            dfs(res, low, high, (cur * 10) + x - 1);
        }
    }

    bool good(int n) {
        int prev = -99999;
        while (n > 0) {
            int x = n % 10;
            n /= 10;
            if ((prev >= 0) && (abs(x - prev) != 1)) return false;
            prev = x;
        }
        return true;
    }
};
