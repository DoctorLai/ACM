// https://helloacm.com/how-to-count-the-prime-number-of-set-bits-in-binary-representation/
// https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/

class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int ans = 0;
        for (int x = L; x <= R; ++ x) {
            int bc = bitset<32>(x).count();
            if (bc == 2 || bc == 3 || bc == 5 || bc == 7 ||
                bc == 11 || bc == 13 || bc == 17 || bc == 19) ans ++;
        }
        return ans;        
    }
};
