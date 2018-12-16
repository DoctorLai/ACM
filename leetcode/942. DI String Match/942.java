// https://helloacm.com/the-di-decreasing-increasing-string-match-algorithm/
// https://leetcode.com/problems/di-string-match/

class Solution {
    public int[] diStringMatch(String S) {
        int sz = S.length();
        int lo = 0;
        int hi = sz;
        int[] r = new int[sz + 1];
        for (int i = 0; i < sz; ++ i) {
            if (S.charAt(i) == 'I') {
                r[i] = lo ++;
            } else {
                r[i] = hi --;
            }
        }
        r[sz] = lo;
        return r;
    }
}
