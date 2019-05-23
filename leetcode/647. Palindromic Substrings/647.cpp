// https://helloacm.com/algorithms-to-count-the-number-of-palindromic-substrings/
// https://leetcode.com/problems/palindromic-substrings/

class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i ++) { // left index
            int j = i, k = i;
            // odd number of palindroms
            while ((j >= 0) && (k < s.size()) && (s[k] == s[j])) { // odd 
                ans ++;
                j --;
                k ++;
            }
            // even number of palindroms
            j = i; k = i + 1;
            while ((j >= 0) && (k < s.size()) && (s[k] == s[j])) { // even
                ans ++;
                j --;
                k ++;
            }            
        }
        return ans;
    }
};
