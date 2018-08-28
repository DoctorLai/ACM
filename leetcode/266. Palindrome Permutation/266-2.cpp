// https://helloacm.com/how-to-check-any-string-is-palindrome-from-its-permutation/
// https://leetcode.com/problems/palindrome-permutation/

class Solution {
public:
    bool canPermutePalindrome(string s) {
        unordered_set<char> cache;
        for (const auto &n: s) {
            if (cache.count(n)) {
                cache.erase(n);
            } else {
                cache.insert(n);
            }
        }
        return cache.size() <= 1;
    }
};
