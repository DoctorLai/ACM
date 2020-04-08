// https://helloacm.com/can-we-construct-k-palindrome-strings/
// https://leetcode.com/problems/construct-k-palindrome-strings/
// MEDIUM, BITSET, PALINDROME

class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.size() < k) return false;
        bitset<26> odd;
        for (const auto &n: s) {
            odd.flip(n - 97);
        }
        return odd.count() <= k;
    }
};
