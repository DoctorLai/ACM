// https://helloacm.com/using-a-hash-table-to-find-a-number-and-its-triple-in-a-list/
// https://binarysearch.com/problems/A-Number-and-Its-Triple
// EASY, HASH TABLE

bool solve(vector<int>& nums) {
    unordered_multiset<int> data(begin(nums), end(nums));
    for (auto &n: nums) {
        if (n == 0) {
            if (data.count(0) > 1) {
                return true;
            }
        } else {
            if (data.count(n * 3)) {
                return true;
            }
        }
    }
    return false;
}
