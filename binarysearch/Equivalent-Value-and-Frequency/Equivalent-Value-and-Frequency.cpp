// https://binarysearch.com/problems/Equivalent-Value-and-Frequency
// https://helloacm.com/using-hash-map-to-find-equivalent-value-and-frequency-in-array/
// EASY, HASH TABLE

bool solve(vector<int>& nums) {
    unordered_map<int, int> data;
    for (auto &n: nums) data[n] ++;
    for (auto &[a, b]: data) {
        if (a == b) return true;
    }
    return false;
}
