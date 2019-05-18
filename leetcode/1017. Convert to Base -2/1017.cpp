// https://helloacm.com/the-negabinary-algorithm-how-to-convert-to-base-minus-two-2/
// https://leetcode.com/problems/convert-to-base-2/

class Solution {
public:
    string baseNeg2(int N) {
        string r = "";
        while (N != 0) {
            int rem = N % (-2);
            N /= (-2);
            if (rem < 0) {
                rem += 2;  // make remainder positive
                N ++;      // adjust the quotient
            }
            r = std::to_string(rem) + r;            
        }        
        return r == "" ? "0" : r;
    }
};
