// https://helloacm.com/how-to-find-pivot-index-of-array/
// https://leetcode.com/problems/find-pivot-index/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (const auto &n: nums) sum += n;
        int psum = 0;
        for (int i = 0; i < nums.size(); ++ i) {
            if (sum - psum - nums[i] == psum) {
                return i;
            }
            psum += nums[i];
        }
        return -1;
    }
};
