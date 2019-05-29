// https://helloacm.com/coding-exercise-valid-palindrome-c-online-judge/
// https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 0) return true;
        int i = 0, j = s.size() - 1;
        while (i < j) {
            while ((i < j) && (!isalnum(s[i]))) ++i;
            while ((i < j) && (!isalnum(s[j]))) --j;
            if (std::toupper(s[i]) != std::toupper(s[j])) return false;
            i ++;
            j --;
        }
        return true;
    }
};
