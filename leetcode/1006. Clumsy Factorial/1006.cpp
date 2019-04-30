// https://helloacm.com/how-to-compute-the-clumsy-factorials-using-iterative-algorithm/
// https://leetcode.com/problems/clumsy-factorial/

class Solution {
public:
    int clumsy(int N) {
        int r = 0, c = 0, num = 0;
        for (int i = N; i >= 1; -- i, ++ c) {
            switch (c % 4) {
                case 0:                    
                    num = i; break;
                case 1:
                    num *= i; break;
                case 2:
                    num /= i; break;
                case 3:
                    if (N - i <= 4) r = num + i; else r = r - num + i; break;
            }
        }
        if (N <= 3) return num;
        if (c % 4 != 0) r -= num;
        return r;
    }
};
