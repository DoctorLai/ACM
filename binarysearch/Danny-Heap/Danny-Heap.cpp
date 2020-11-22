// https://helloacm.com/check-if-an-array-represents-a-max-heap-danny-heap-algorithm/
// https://binarysearch.com/problems/Danny-Heap
// EASY, HEAP

bool solve(vector<int>& nums) {
    for (int i = 0; i * 2 + 1 < nums.size(); ++ i) {
        int a = (i << 1) + 1;
        if (nums[i] < nums[a]) {
            return false;
        }
        if (a + 1 < nums.size() && (nums[i] < nums[a + 1])) {
            return false;
        }
    }
    return true;
}
