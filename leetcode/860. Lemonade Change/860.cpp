// https://helloacm.com/how-to-solve-the-lemonade-change-problem-by-simulation-algorithm/
// https://leetcode.com/problems/lemonade-change/

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for (const auto n: bills) {
            if (n == 5) {
                five ++;
            } else if (n == 10) {
                if (five == 0) return false;
                five --;
                ten ++;
            } else if (n == 20) {
                if (ten > 0 && five > 0) {
                    ten --;
                    five --;
                } else if (five > 3) {
                    five -= 3;
                } else return false;
            }
        }
        return true;
    }
};
