// https://helloacm.com/algorithm-to-delete-a-character-to-make-a-valid-palindrome/
// https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
public:
    bool validPalindrome(string s) {
        for (int i = 0; i < s.size() / 2; i ++) {
            int j = s.size() - 1 - i;
            if (s[i] != s[j]) {
                return validPalindrome(s, i, j - 1) ||
                    validPalindrome(s, i + 1, j);
            }
        }
        return true;
    }
    
private:
    bool validPalindrome(const string &s, int from, int to) {
        int i = from, j = to;
        while (i < j) {
            if (s[i] != s[j]) return false;
            i ++;            
            j --;            
        }
        return true;
    }
};
