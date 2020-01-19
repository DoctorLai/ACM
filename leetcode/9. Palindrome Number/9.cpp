// https://helloacm.com/algorithms-to-determine-a-palindrome-number/
// https://leetcode.com/problems/palindrome-number/
// EASY

class Solution {
public:
    bool isPalindrome(int x) {
        string s = std::to_string(x);
        // we can also do the following
        // string r = s;
        // std::reverse(begin(r), end(r));
        string r(rbegin(s), rend(s)); 
        return r == s;
    }
};
