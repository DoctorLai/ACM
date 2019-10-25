// https://helloacm.com/how-to-find-the-longest-harmonious-subsequence/
// https://leetcode.com/problems/longest-harmonious-subsequence/
// EASY, HASH MAP

class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> data;
        for (const auto &n: nums) {
            data[n] ++;
            if (data.find(n + 1) != data.end()) {
                ans = max(ans, data[n] + data[n + 1]);
            }
            if (data.find(n - 1) != data.end()) {
                ans = max(ans, data[n] + data[n - 1]);
            }
        }        
        return ans;
    }
};
