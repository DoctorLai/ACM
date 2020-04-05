// https://helloacm.com/algorithm-to-count-the-largest-group-of-digit-sums/
// https://leetcode.com/problems/count-largest-group/
// EASY

class Solution {
public:
    int countLargestGroup(int n) {
        int count[37] = {};
        int curMax = 0;
        int ans = 0;
        for (int i = 1; i <= n; ++ i) {
            int j = i;
            int r = 0;
            while (j > 0) {
                r += (j % 10);
                j /= 10;
            }
            count[r] ++;
            if (count[r] > curMax) {
                curMax = count[r];
                ans = 1;
            } else if (count[r] == curMax) {
                ans ++;
            }
        }
        return ans;
    }
};
