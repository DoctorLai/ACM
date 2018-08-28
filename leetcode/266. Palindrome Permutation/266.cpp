// https://helloacm.com/how-to-check-any-string-is-palindrome-from-its-permutation/
// https://leetcode.com/problems/palindrome-permutation/

class Solution {
public:
    bool canPermutePalindrome(string s) {
        unordered_map<char, int> count;
        for (const auto &n: s) {
            if (count.find(n) == count.end()) {
                count[n] = 1;
            } else {
                count[n] ++;
            }
        }
        int j = 0;
        for (auto i = count.begin(); i != count.end(); ++ i) {
            if ((i->second % 2) == 1) {
                j ++;
                if (j > 1) { // more than 1 letters appear odd number of times
                    return false;
                }
            }
        }
        return true;
    }
};
