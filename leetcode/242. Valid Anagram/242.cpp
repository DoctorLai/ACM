// https://helloacm.com/how-to-check-valid-anagram-in-cc/
// https://leetcode.com/problems/valid-anagram/
// EASY, HASH TABLE, STRING

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_multiset<char> ss(begin(s), end(s));
        unordered_multiset<char> tt(begin(t), end(t));
        return ss == tt;
    }
};
