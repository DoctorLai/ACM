// https://helloacm.com/count-the-binary-watch-stats-using-bruteforce-algorithm-via-c-bitset-or-compiler-intrinsics-__builtin_popcount/
// https://leetcode.com/problems/binary-watch/

class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> r;
        if ((num < 0)) {
            return r;
        }
        for (int h = 0; h < 12; ++ h) {
            for (int m = 0; m < 60; ++ m) {
                if (bitset<16>((m << 4) + h).count() == num) { 
                // or using compiler Intrinsics
                // if (__builtin_popcount(h) + __builtin_popcount(m) == num) {
                    string s = std::to_string(h);
                    s += ":";
                    if (m < 10) s += "0";
                    s += std::to_string(m);
                    r.push_back(s);
                }
            }
        }
        return r;
    }
};
