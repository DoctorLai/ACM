// https://helloacm.com/how-to-find-smallest-letter-greater-than-target/
// https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int lo = 0, hi = letters.size();
        while (lo < hi) {
            int mi = lo + (hi - lo) / 2;
            if (letters[mi] <= target) {
                lo = mi + 1;
            } else {
                hi = mi;
            }
        }
        return letters[lo % letters.size()];                
    }
};
