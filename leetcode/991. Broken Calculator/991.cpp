// https://helloacm.com/using-greedy-algorithm-to-fix-the-broken-calculator/
// https://leetcode.com/problems/broken-calculator/

class Solution {
public:
    int brokenCalc(int X, int Y) {
        int ans = 0;
        while (X < Y) {
            if (Y % 2 == 0) {
                Y /= 2;
            } else {
                Y ++;
            }
            ans ++;
        }
        return ans + X - Y;
    }
};
