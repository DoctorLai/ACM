// https://helloacm.com/how-to-find-the-dominant-index-in-array-largest-number-at-least-twice-of-others/
// https://leetcode.com/problems/largest-number-at-least-twice-of-others/

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if (nums.size() == 0) return -1;
        if (nums.size() == 1) return 0;
        int max1 = nums[0];
        int max2 = INT_MIN;
        int index = 0;
        for (int i = 1; i < nums.size(); ++ i) {
            if (nums[i] > max1) {
                max2 = max1;
                max1 = nums[i];
                index = i;
            } else {
                if (nums[i] > max2) {
                    max2 = nums[i];
                }
            }
        }
        return (max1 &t;= 2 * max2) ? index : -1;
    }
};
