// https://helloacm.com/how-to-compute-the-number-of-days-in-a-month/
// https://leetcode.com/problems/number-of-days-in-a-month/

class Solution {
public:
    int numberOfDays(int Y, int M) {
        if (M == 2) {
            if (isLeap(Y)) return 29;
            return 28;
        }
        switch (M) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                return 31;
        }
        return 30;
    }
private:
    bool isLeap(int Y) {
        if (Y % 400 == 0) {
            return true;
        } else if ( Y % 100 == 0) {
            return false;
        } else if (Y % 4 == 0) {
            return true;
        } else {
            return false;
        }        
    }
};
