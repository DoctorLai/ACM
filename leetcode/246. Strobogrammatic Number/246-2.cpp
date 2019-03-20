// https://helloacm.com/how-to-check-if-a-integer-is-a-strobogrammatic-number/
// https://leetcode.com/problems/strobogrammatic-number/

class Solution {
public:
    bool isStrobogrammatic(string num) {
        int len = num.size();
        for (int i = 0; i < len; ++ i) {
            switch (num[i] - 48) {
                case 2:
                case 3:
                case 4:
                case 5:
                case 7: return false;
                case 6: if ('9' != num[len - 1 - i]) return false; break;
                case 9: if ('6' != num[len - 1 - i]) return false; break;
                case 1:
                case 8:
                case 0: if (num[i] != num[len - 1 - i]) return false; break;
            }
        }
        return true;
    }
};
