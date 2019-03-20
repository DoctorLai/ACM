// https://helloacm.com/how-to-find-pivot-index-of-array/
// https://leetcode.com/problems/find-pivot-index/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> sum_left = nums, sum_right = nums;
        for (int i = 1; i < sum_left.size(); ++ i) {
            sum_left[i] += sum_left[i - 1];
        }
        for (int i = sum_right.size() - 2; i >= 0; -- i) {
            sum_right[i] += sum_right[i + 1];
        }
        for (int i = 0; i < nums.size(); ++ i) {
            if (sum_left[i] == sum_right[i]) {
                return i;
            }
        }
        return -1;
    }
};
