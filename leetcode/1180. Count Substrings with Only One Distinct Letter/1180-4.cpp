// https://helloacm.com/counting-substrings-with-only-one-distinct-letter-with-different-algorithms/
// https://leetcode.com/problems/count-substrings-with-only-one-distinct-letter/

class Solution {
public:
    int countLetters(string S) {
        int ans = 0;
        int l = S.size();
        int i = 0, j = 0;
        while (i < l) {
            while ((j < l) && (S[j] == S[i])) {
                j ++;
                ans ++;
            }
            j = ++i;            
        }
        return ans;
    }
};
