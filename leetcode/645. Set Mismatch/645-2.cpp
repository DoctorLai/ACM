// https://helloacm.com/set-mismatch-find-the-duplicate-and-missing-number-in-array/
// https://leetcode.com/problems/set-mismatch/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int> data;
        vector<int> result = {0, 0};
        for (const auto &n: nums) {
            if (data.count(n)) {
                result[0] = n;
            } else {
                data.insert(n);
            }
        }
        for (int i = 1; i <= nums.size(); ++ i) {
            if (data.count(i) == 0) {
                result[1] = i;
                break;
            }
        }
        return result;
    }
};
