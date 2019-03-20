// https://helloacm.com/how-to-check-if-a-integer-is-a-strobogrammatic-number/
// https://leetcode.com/problems/strobogrammatic-number/

class Solution {
public:
    bool isStrobogrammatic(string num) {
        string x = "";
        for (int i = 0; i < num.size(); ++ i) {
            switch (num[i] - 48) {
                case 2:
                case 3:
                case 4:
                case 5:
                case 7: return false;
                case 1: x = "1" + x; break;
                case 6: x = "9" + x; break;
                case 9: x = "6" + x; break;
                case 8: x = "8" + x; break;
                case 0: x = "0" + x; break;
            }
        }
        return x == num;
    }
};
