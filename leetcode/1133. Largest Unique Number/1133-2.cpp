// https://helloacm.com/how-to-find-the-largest-unique-number-in-array/
// https://leetcode.com/problems/largest-unique-number/

class Solution {
public:
    int largestUniqueNumber(vector<int>& A) {
        int c[1001] = { 0 };
        for (const auto &n: A) {
            c[n] ++;
        }
        for (int i = 1000; i >= 0; -- i) {
            if (c[i] == 1) return i;
        }
        return -1;
    }
};
