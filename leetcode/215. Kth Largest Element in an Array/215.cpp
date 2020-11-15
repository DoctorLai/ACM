// https://helloacm.com/how-to-find-kth-largest-element-in-an-array-c-coding-exercise/
// https://leetcode.com/problems/kth-largest-element-in-an-array/
// MEDIUM, PARTITION, ARRAY

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int pivotIndex = partition(nums, left, right);
            if (pivotIndex == nums.size() - k) {
                return nums[pivotIndex];
            }
            if (pivotIndex > nums.size() - k) {
                right = pivotIndex - 1;
            } else {
                left = pivotIndex + 1;
            }
        }
        return -1;
    }
    
private:
    int partition(vector<int> &nums, int low, int high) {
        int idx = low;
        for (int i = low; i < high; ++ i) {
            if (nums[i] <= nums[high]) {
                swap(nums[idx ++], nums[i]);
            }
        }
        swap(nums[idx], nums[high]);
        return idx;
    }
};

