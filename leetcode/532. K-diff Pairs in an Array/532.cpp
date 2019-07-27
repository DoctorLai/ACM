// https://helloacm.com/how-to-find-the-k-diff-pairs-in-an-array-with-two-pointer-or-hash-map/
// https://leetcode.com/problems/k-diff-pairs-in-an-array/

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        int n = nums.size();
        int res = 0;
        for (int i = 0; i < n; ++ i) {
            if ((i > 0) && (nums[i] == nums[i - 1])) continue;
            for (int j = i + 1; j < n; ++ j) {
                if (nums[j] - nums[i] > k) {
                    break;
                }
                if (nums[j] - nums[i] == k) {
                    res ++;
                    break;
                }
            }
        }
        return res;
    }
};
