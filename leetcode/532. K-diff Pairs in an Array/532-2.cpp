// https://helloacm.com/how-to-find-the-k-diff-pairs-in-an-array-with-two-pointer-or-hash-map/
// https://leetcode.com/problems/k-diff-pairs-in-an-array/

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        int n = nums.size();
        int res = 0;
        int i = 0, j = 0;
        while (j < n) {
            if (i == j) {
                j ++;
            }
            if ((j < n) && (nums[j] - nums[i] == k)) {
                res ++;
                i ++;
                // skip duplicates
                while (i < n && (nums[i] == nums[i - 1])) i ++;
                while (j < n && (nums[j] == nums[j - 1])) j ++;                
            } else if (j < n && (nums[j] - nums[i]) > k) {
                i ++;
            } else {
                j ++;
            }
        }
        return res;
    }
};
