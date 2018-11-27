// https://helloacm.com/how-to-find-first-and-last-position-of-element-in-sorted-array/
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, mid;
        int lower = -1, higher = -1;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (target > nums[mid]) {
                low = mid + 1;
            } else if (target < nums[mid]) {
                high = mid - 1;
            } else {
                lower = mid;
                higher = mid;
                break;
            }
        }
        if (lower == -1) return {-1, -1};
        while (lower > 0 && nums[lower] == nums[lower - 1]) lower--;
        while (higher + 1 < nums.size() && nums[higher] == nums[higher + 1]) higher ++;
        return {lower, higher};
    }
};
