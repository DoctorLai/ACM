// https://helloacm.com/algorithms-to-find-the-missing-element-in-sorted-array/
// https://leetcode.com/problems/missing-element-in-sorted-array/

class Solution {
public:
    int missingElement(vector<int>& nums, int k) {
        int a = nums[0];  
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] != a) {
                if (--k == 0) return a;
            } else {
                i ++;
            }
            a ++;
        }
        return a + k - 1;
    }
};
