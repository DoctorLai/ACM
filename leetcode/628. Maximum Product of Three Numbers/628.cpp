// https://helloacm.com/compute-the-maximum-product-of-three-numbers-in-an-array/
// https://leetcode.com/problems/maximum-product-of-three-numbers/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sz = nums.size();
        return max(nums[0] * nums[1] * nums[sz - 1], nums[sz - 1] * nums[sz - 2] * nums[sz - 3]);     
    }
};
