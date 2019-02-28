// https://helloacm.com/how-to-check-valid-perfect-square-without-sqrt-function/
// https://leetcode.com/problems/valid-perfect-square/

class Solution {
public:
    bool isPerfectSquare(int num) {
      if (num < 1) return false;
      if (num == 1) return true;
      long t = num / 2;
      while (t * t > num) {
        t = (t + num / t) / 2;
      }
      return t * t == num;
    }
};
