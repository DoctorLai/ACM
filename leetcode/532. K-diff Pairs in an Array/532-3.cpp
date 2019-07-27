// https://helloacm.com/how-to-find-the-k-diff-pairs-in-an-array-with-two-pointer-or-hash-map/
// https://leetcode.com/problems/k-diff-pairs-in-an-array/

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (nums.empty()) return 0;
        if (k < 0) return 0;
        unordered_map<int, int> data;
        for (const auto &n: nums) {
            data[n] ++;
        }
        int res = 0;        
        for (auto it = data.begin(); it != data.end(); ++ it) {
            if (k == 0) {
                int x = it->second;
                if (x > 1) {
                    res ++;
                }
            } else {
              if (data.find(it->first - k) != data.end()) {
                  res ++;
              }
            }
        }
        return res;
    }
};
