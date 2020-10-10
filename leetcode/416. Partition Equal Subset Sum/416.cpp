// https://helloacm.com/partition-equal-subset-sum-algorithms-using-dfs-top-down-and-bottom-up-dp/
// https://leetcode.com/problems/partition-equal-subset-sum/
// MEDIUM, DP, DFS

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        sum = std::accumulate(begin(nums), end(nums), 0, [](auto &a, auto &b) {
            return a + b;
        });
        if (sum & 1) return false;
        return dfs(nums, 0, 0);
    }

private:
    int sum;
    unordered_map<int, bool> memo;
    
    bool dfs(vector<int> &nums, int curSum, int left) {
        if (curSum + curSum == sum) {
            return true;
        }
        if (curSum + curSum > sum) {
            return false;
        }
        if (memo.find(curSum) != memo.end()) {
            return memo[curSum];
        }
        for (int i = left; i < nums.size(); ++ i) {
            if (dfs(nums, curSum + nums[i], i + 1)) {
                memo[curSum] = true;
                return true;
            }
        }
        memo[curSum] = false;
        return false;
    }
};