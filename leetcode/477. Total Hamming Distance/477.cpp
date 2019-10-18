// https://helloacm.com/compute-the-total-hamming-distance-between-all-pairs-of-integers/
// https://leetcode.com/problems/total-hamming-distance/

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        if (nums.empty()) return 0;
        int k = nums.size();
        int bits[32];
        std::fill(begin(bits), end(bits), 0);
        for (auto &n: nums) {
            int i = 0;
            while (n > 0) {
                bits[i ++] += n & 0x1;
                n >>= 1;
            }
        }
        int ans = 0;
        for (const auto &n: bits) {
            ans += n * (k - n);
        }
        return ans;
    }
};
