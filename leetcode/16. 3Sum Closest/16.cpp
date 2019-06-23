// https://helloacm.com/how-to-find-the-closest-sum-of-three-in-an-array-using-two-pointer-algorithm-3sum-closest/
// https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(begin(nums), end(nums));
        int sum = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.size() - 2; ++ i) {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int cur = nums[i] + nums[j] + nums[k];
                if (cur == target) {
                    return target;
                } else if (cur < target) {
                    j ++;
                } else {
                    k --;
                }
                if (abs(cur - target) < abs(sum - target)) {
                    sum = cur;
                }
            }
        }
        return sum;
    }
};
