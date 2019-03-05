// https://helloacm.com/the-length-of-the-longest-palindrome/
// https://leetcode.com/problems/longest-palindrome/

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> count;
        for (const auto &ch: s) {
            if (count.find(ch) == count.end()) {
                count[ch] = 1;
            } else {
                count[ch] ++;
            }
        }
        int odd = 0, sum = 0;
        for (auto it = count.begin(); it != count.end(); it ++) {
            if (it->second % 2 == 0) {
                sum += it->second;
            } else {
                odd = 1;
                sum += it->second - 1;
            }
        }
        return sum + odd;
    }
};
