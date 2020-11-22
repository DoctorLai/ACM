// https://helloacm.com/find-the-minimum-cost-to-sort-the-array-in-ascending-or-descending-order/
// https://binarysearch.com/problems/Minimum-Cost-Sort
// EASY, SORT

int solve(vector<int>& nums) {
    vector<int> a1 = nums;
    sort(begin(a1), end(a1));
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < nums.size(); ++ i) {
        sum1 += abs(nums[i] - a1[i]); 
    }
    for (int i = 0; i < nums.size(); ++ i) {
        sum2 += abs(nums[i] - a1[nums.size() - 1 - i]); 
    }
    return min(sum1, sum2);
}
